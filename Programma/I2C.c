/* --COPYRIGHT--,GPL V3
 * Copyright (c) 2021, Victor Hogeweij
 * Alle rechten voorbehouden,
 *
 * Deze software is uitgebracht onder licentie van: GPL V3.
 * Bij het ontvangen van dit programma is er een versie van de GPL V3 licentie
 * meegeleverd. (zie het bestand LICENSE!).
 * In dit meegeleverde bestand staan de regels voor het gebruiken, modificeren en delen van deze software.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * --/COPYRIGHT--*/
#include <msp430.h>
#include <stdint.h>

unsigned char TXData[3];
unsigned char RXData[3];
unsigned char TXByteCtr, RXByteCtr,byteIndex =0;
unsigned char pointerAdres;      //bevat adres van te lezen/schrijven 'register'
unsigned char *pData = &pointerAdres;
unsigned char SLAVE_ADDR = 0x48;
#define AANTAL_REGISTERS 32
volatile uint16_t registers[AANTAL_REGISTERS] = { 0 }; //32x 16bits registers maken

volatile unsigned char rxctr = 0;

enum
{
    NIETS, POINTER, REGSCHRIJVEN, REGLEZEN
} toestand;

void I2C_init_master()
{
    __bic_SR_register(GIE);
    // Configure Pins for I2C
    P1SEL0 |= BIT2 | BIT3;                            // I2C pins
    // Configure USCI_B0 for I2C mode
    UCB0CTLW0 |= UCSWRST;                          // put eUSCI_B in reset state
    UCB0CTLW0 |= UCMODE_3 | UCMST;                    // I2C master mode, SMCLK
    UCB0BRW = 0x80;                                    // baudrate = SMCLK / 64
    UCB0CTLW0 &= ~ UCSWRST;                            // clear reset register
    UCB0IE |= UCRXIE1 | UCTXIE1 | UCNACKIE; // transmit, receive and NACK interrupt enable
    __bis_SR_register(GIE);
}

void I2C_init_slave()
{
    __bic_SR_register(GIE);
    P1SEL0 |= BIT2 | BIT3;
    UCB0CTLW0 = UCSWRST;                      // Software reset enabled
    UCB0CTLW0 |= UCMODE_3 | UCSYNC;           // I2C mode, sync mode
    UCB0I2COA0 = SLAVE_ADDR | UCOAEN;         // Own Address and enable
    UCB0CTLW0 &= ~UCSWRST;                    // clear reset register
    UCB0IE |= UCTXIE0 + UCRXIE0 + UCSTPIE + UCSTTIE;
    rxctr = 0;                              // rx teller naar 0
    __bis_SR_register(GIE);
}
void I2C_master_write(uint8_t slaveaddr, uint8_t register_id, uint8_t *Data,
              uint8_t numbytes)
{
    UCB0I2CSA = slaveaddr;              // configure slave address
    uint8_t i;
    TXData[0]=register_id;
    for(i=0; i<numbytes; i++)
        TXData[i+1]= Data[i];
    byteIndex = 0;
    __delay_cycles(1000);                         // Delay between transmissions
    TXByteCtr = numbytes + 1;                            // Load TX byte counter
    while (UCB0CTLW0 & UCTXSTP);                      // Ensure stop condition got sent
    UCB0CTLW0 |= UCTR | UCTXSTT;                  // I2C TX, start condition
    __bis_SR_register(LPM0_bits | GIE);          // Enter LPM0 w/ interrupts
                                                 // Remain in LPM0 until all data
                                                 // is TX'd
}
void I2C_master_recv(uint8_t slaveaddr,uint8_t register_id, uint8_t *Data, uint8_t numbytes){
    UCB0I2CSA = slaveaddr;              // configure slave address
    uint8_t i;
    TXData[0]=register_id;
    for(i=0; i<numbytes; i++)
        TXData[i+1]= Data[i];
    byteIndex = 0;
    __delay_cycles(1000);                         // Delay between transmissions
    TXByteCtr = numbytes + 1;                            // Load TX byte counter
    while (UCB0CTLW0 & UCTXSTP);                      // Ensure stop condition got sent
    UCB0CTLW0 |= UCTR | UCTXSTT;                  // I2C TX, start condition
    __bis_SR_register(LPM0_bits | GIE);          // Enter LPM0 w/ interrupts
                                                 // Remain in LPM0 until all data
                                                 // is TX'd
    RXByteCtr = numbytes;                          // Load RX byte counter
    while (UCB0CTLW0 & UCTXSTP);             // Ensure stop condition got sent
    UCB0CTLW0 |= UCTXSTT;                    // I2C start condition
    __bis_SR_register(CPUOFF + GIE);        // Enter LPM0 w/ interrupts
}

void I2C_slave_recv(uint8_t register_id, uint8_t *Data){
    *Data = registers[register_id];
}

void I2C_setreg(uint8_t register_id, uint16_t Data){
    registers[register_id]=Data;
}

#if defined(__TI_COMPILER_VERSION__) || defined(__IAR_SYSTEMS_ICC__)
#pragma vector = USCI_B0_VECTOR
__interrupt void USCIB0_ISR(void)
#elif defined(__GNUC__)
void __attribute__ ((interrupt(USCI_B0_VECTOR))) USCIB0_ISR (void)
#else
#error Compiler not supported!
#endif
{
    switch (__even_in_range(UCB0IV, USCI_I2C_UCBIT9IFG))
    {
    case USCI_NONE:
        break;                        // Vector 0: No interrupts break;
    case USCI_I2C_UCALIFG:
        break;
    case USCI_I2C_UCNACKIFG:
        break;                                      // Vector 4: NACKIFG break;
    case USCI_I2C_UCSTTIFG:
        //start signaal ontvangen
        switch (toestand)
        {
        case NIETS:
            //boel resetten voordat we (opnieuw) beginnen
            rxctr = 0;
            toestand = POINTER;
            break;
        case POINTER:
            //Start signaal in toestand pointer betekent repeated start (dus master wilt schrijven)
            toestand = REGLEZEN;
            break;
        }

        break;                // Vector 6: STTIFG break;
    case USCI_I2C_UCSTPIFG:
        //stop signaal, klaar met transactie
        if (UCB0STAT & UCSTPIFG)
        {
            toestand = NIETS;
        }
        UCB0IFG &= ~(UCTXIFG0);
        break;                // Vector 8: STPIFG break;
    case USCI_I2C_UCRXIFG3:
        break;                // Vector 10: RXIFG3 break;
    case USCI_I2C_UCTXIFG3:
        break;                // Vector 14: TXIFG3 break;
    case USCI_I2C_UCRXIFG2:
        break;                // Vector 16: RXIFG2 break;
    case USCI_I2C_UCTXIFG2:
        break;                // Vector 18: TXIFG2 break;
    case USCI_I2C_UCRXIFG1:
        RXByteCtr--;                              // Decrement RX byte counter
        if (RXByteCtr)
        {
          RXData[RXByteCtr-1] = UCB0RXBUF;                 // Move RX data to address PRxData
          if (RXByteCtr == 1)                     // Only one byte left?
            UCB0CTL1 |= UCTXSTP;                  // Generate I2C stop condition
        }
        else
        {
          RXData[0] = UCB0RXBUF;                   // Move final RX data to PRxData
          __bic_SR_register_on_exit(CPUOFF);      // Exit LPM0
        }
        break;                // Vector 20: RXIFG1 break;
    case USCI_I2C_UCTXIFG1:
        if (TXByteCtr)                                // Check TX byte counter
        {
            UCB0TXBUF = TXData[byteIndex];            // Load TX buffer
            TXByteCtr--;                            // Decrement TX byte counter
            byteIndex++;
        }
        else
        {
            UCB0CTLW0 |= UCTXSTP;                     // I2C stop condition
            UCB0IFG &= ~UCTXIFG;                    // Clear USCI_B0 TX int flag
            __bic_SR_register_on_exit(LPM0_bits);     // Exit LPM0
        }
        break;                // Vector 22: TXIFG1 break;
    case USCI_I2C_UCRXIFG0:
        if (toestand == POINTER && rxctr == 0)
        {
            pointerAdres = UCB0RXBUF; // eerste byte is altijd pointer adres (welk register)
            if (pointerAdres >= AANTAL_REGISTERS)
            {
                //todo:stuur nack
                toestand = NIETS;
            }
            if (rxctr < 2)
            {
                rxctr++;                 //aantal bytes bij houden.
                pData = (uint8_t*) &registers[pointerAdres]; //pointer laten wijzen naar juiste register
            }
        }
        else
        {
            //RX vlaggetje maar niet 1e keer, dus
            //nu toestand=REGSCHRIJVEN;

            //master wilt schrijven naar register
            //dus data schrijven en plek ophogen.
            //UART_printf("UCB0RXBUF: %x \r\n",UCB0RXBUF);
            *pData = UCB0RXBUF;
            pData++;
        }
        break;                // Vector 24: RXIFG0 break;
    case USCI_I2C_UCTXIFG0:
        /*
         * leesactie vanuit master
         * slave moet data sturen
         */
        //data lezen uit pointer register
        if (toestand == REGLEZEN)
        {
            UCB0TXBUF = *pData; //pRxData wijst naar registers[pointerAdres]
            pData++;              //volgende byte ophalen
        }
        break;                                      // Vector 26: TXIFG0 break;
    case USCI_I2C_UCBCNTIFG:
        break;               // Vector 28: BCNTIFG
    case USCI_I2C_UCCLTOIFG:
        break;               // Vector 30: clock low timeout
    case USCI_I2C_UCBIT9IFG:
        break;               // Vector 32: 9th bit
    default:
        break;
    }
}
