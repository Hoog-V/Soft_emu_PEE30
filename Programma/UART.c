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
#include <msp430fr2476.h>
#include "stdarg.h"
#include <stdint.h>
#include <stdbool.h>
#include <ctype.h>
#define RXD1 BIT5 // RX P2.5
#define TXD1 BIT6 // TX P2.6

volatile char uart_data[50];

uint8_t array_index = 0;
uint8_t uart_data_size = 0;
void UART_init(void)
{
    P2SEL0 |= (RXD1 | TXD1);                  // Configure RXD and TXD pins
    // Configure UART pins
    // Configure UART
    UCA1CTLW0 |= UCSWRST;
    UCA1CTLW0 |= UCSSEL__SMCLK;

    // Baud Rate calculation
    // 16000000/(16*115200) = 8.68
    // Fractional portion = 0.68
    // User's Guide Table 17-4: UCBRSx = 0xF7
    // UCBRFx = int ( (52.083-52)*16) = 10
    UCA1BR0 = 8;                             // 16000000/8/115200
    UCA1BR1 = 0x00;
    UCA1MCTLW = 0xF700 | UCOS16 | UCBRF_10;
    UCA1CTLW0 &= ~UCSWRST;                    // Initialize eUSCI
    UCA1IE |= UCRXIE;                         // Enable USCI_A1 RX interrupt
    __bis_SR_register(GIE);
}



void UART_putc(unsigned char c)
{
    while(!(UCA1IFG&UCTXIFG));
    UCA1TXBUF = c;                          // TX
}

void UART_puts(const char *str)
{
     while(*str) UART_putc(*str++);
}

int UART_recv(char * data){
    __bis_SR_register(GIE | LPM0_bits);
    uint8_t i;
    for(i=0; i < uart_data_size; i++)
        data[i] = uart_data[i];
        uart_data[i] = 0;
    return uart_data_size;
}

#if defined(__TI_COMPILER_VERSION__) || defined(__IAR_SYSTEMS_ICC__)
#pragma vector=USCI_A1_VECTOR
__interrupt void USCI_A1_ISR(void)
#elif defined(__GNUC__)
void __attribute__ ((interrupt(USCI_A0_VECTOR))) USCI_A0_ISR (void)
#else
#error Compiler not supported!
#endif
{
  switch(__even_in_range(UCA1IV, USCI_UART_UCTXCPTIFG))
  {
    case USCI_NONE: break;
    case USCI_UART_UCRXIFG:
      while(!(UCA1IFG&UCTXIFG));
      if(UCA1RXBUF == '\r'){
          uart_data_size = array_index-1;
          array_index =0;
          UART_puts("ACK");
          __bic_SR_register_on_exit(LPM0_bits);     // Exit LPM0
      }
      else{
      uart_data[array_index++] = UCA1RXBUF;
      }
      __no_operation();
      break;
    case USCI_UART_UCTXIFG: break;
    case USCI_UART_UCSTTIFG: break;
    case USCI_UART_UCTXCPTIFG: break;
  }
}

int parse_uart_data(char * data, uint8_t size,int * parsed_data){
uint8_t i;
uint8_t parsed_data_index = 0;
for(i = 0; i < size; i++){
}
return 0;
}
