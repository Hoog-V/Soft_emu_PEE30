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
#include "stdarg.h"
#include <stdint.h>
#include <stdbool.h>

#define RXD BIT5 // RX P1.1
#define TXD BIT4 // TX P1.2

bool Enter = false;
volatile char debug_invoer[10];

uint8_t arr_index = 0;
void Debug_init(void)
{
    P1SEL0 |= (RXD | TXD);                  // Configure RXD and TXD pins
    // Configure UART pins
    // Configure UART
    UCA0CTLW0 |= UCSWRST;
    UCA0CTLW0 |= UCSSEL__SMCLK;

    // Baud Rate calculation
    // 16000000/(16*115200) = 8.68
    // Fractional portion = 0.68
    // User's Guide Table 17-4: UCBRSx = 0xF7
    // UCBRFx = int ( (52.083-52)*16) = 10
    UCA0BR0 = 8;                             // 16000000/8/115200
    UCA0BR1 = 0x00;
    UCA0MCTLW = 0xF700 | UCOS16 | UCBRF_10;
    UCA0CTLW0 &= ~UCSWRST;                    // Initialize eUSCI
    UCA0IE |= UCRXIE;                         // Enable USCI_A0 RX interrupt
    __bis_SR_register(GIE);
}



void Debug_putc(unsigned char c)
{
    while(!(UCA0IFG&UCTXIFG));
    UCA0TXBUF = c;                          // TX
}

void Debug_puts(const char *str)
{
     while(*str) Debug_putc(*str++);
}

static const unsigned long _dv[] = {
//  4294967296      // 32 bit unsigned max
   1000000000,     // +0
    100000000,     // +1
     10000000,     // +2
      1000000,     // +3
       100000,     // +4
//       65535      // 16 bit unsigned max
        10000,     // +5
         1000,     // +6
          100,     // +7
           10,     // +8
            1,     // +9
};

static void _xtoa(unsigned long x, const unsigned long *dp)
{
   char c;
   unsigned long d;
   if(x) {
       while(x < *dp) ++dp;
       do {
           d = *dp++;
           c = '0';
           while(x >= d) ++c, x -= d;
           Debug_putc(c);
       } while(!(d & 1));
   } else
       Debug_putc('0');
}

static void _puth(unsigned n)
{
   static const char hex[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
   Debug_putc(hex[n & 15]);
}

void Debug_printf(char *format, ...)
{
   char c;
   int i;
   long n;

   va_list a;
   va_start(a, format);
   while((c = *format++)) {
       if(c == '%') {
           switch(c = *format++) {
               case 's':                       // String
                   Debug_puts(va_arg(a, char*));
                   break;
               case 'c':                       // Char
                   Debug_putc(va_arg(a, char));
                   break;
               case 'i':                       // 16 bit Integer
               case 'u':                       // 16 bit Unsigned
                   i = va_arg(a, int);
                   if(c == 'i' && i < 0) i = -i, Debug_putc('-');
                   _xtoa((unsigned)i, _dv + 5);
                   break;
               case 'l':                       // 32 bit Long
               case 'n':                       // 32 bit uNsigned loNg
                   n = va_arg(a, long);
                   if(c == 'l' &&  n < 0) n = -n, Debug_putc('-');
                   _xtoa((unsigned long)n, _dv);
                   break;
               case 'x':                       // 16 bit heXadecimal
                   i = va_arg(a, int);
                   _puth(i >> 12);
                   _puth(i >> 8);
                   _puth(i >> 4);
                   _puth(i);
                   break;
               case 'y':                       // 8 bit heXadecimal
                   i = va_arg(a, int);
                   _puth(i >> 4);
                   _puth(i);
                   break;
               case 0: return;
               default: goto bad_fmt;
           }
       } else
bad_fmt:    Debug_putc(c);
   }
   va_end(a);
}

#if defined(__TI_COMPILER_VERSION__) || defined(__IAR_SYSTEMS_ICC__)
#pragma vector=USCI_A0_VECTOR
__interrupt void USCI_A0_ISR(void)
#elif defined(__GNUC__)
void __attribute__ ((interrupt(USCI_A0_VECTOR))) USCI_A0_ISR (void)
#else
#error Compiler not supported!
#endif
{
  switch(__even_in_range(UCA0IV, USCI_UART_UCTXCPTIFG))
  {
    case USCI_NONE: break;
    case USCI_UART_UCRXIFG:
      while(!(UCA0IFG&UCTXIFG));
      UCA0TXBUF = UCA0RXBUF;
      //Enter
      if(UCA0RXBUF == '\r'){
          debug_invoer[arr_index]= '\0';
          arr_index = 0;
          Enter =true;
      }
      //Backspace
      else if(UCA0RXBUF == 8 || UCA0RXBUF == 127){
          Debug_printf("%c[2K", 27);
          if(arr_index > 0){
          arr_index=0;
          }
          Debug_putc('\r');
      }
      //Normale invoer
      else{
          debug_invoer[arr_index]=UCA0RXBUF;
          arr_index++;
      }
      __no_operation();
      break;
    case USCI_UART_UCTXIFG: break;
    case USCI_UART_UCSTTIFG: break;
    case USCI_UART_UCTXCPTIFG: break;
  }
}
void Wis_debug_console(){
    Debug_printf("%c%c%c%c",0x1B,0x5B,0x32,0x4A);
    Debug_puts("\033[0;0H"); // set cursor to 0,0
}

