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
#include <stdbool.h>
#include <Debug_console.h>
#include <Menus.h>
#include <MCU_emu.h>
#include <Aandrijving_emu.h>
enum status{init,optie, belasting, MCU, aandrijving,klaar};
uint8_t huidige_status;

void Debug_menu(){
    switch(huidige_status){
    case init:{
        Wis_debug_console();
        Debug_puts("Druk op enter om te beginnen...\r\n");
        while(Enter == false);
        huidige_status = optie;
        Enter = false;
        break;
    }
    case optie:{
        Wis_debug_console();
        Debug_puts(opties_menu);
        int i;
        while(Enter == false);
        Enter = false;
        uint8_t gekozen_optie = debug_invoer[0]-48;
        huidige_status= (gekozen_optie > 0 && gekozen_optie < 4) ? (debug_invoer[0]-47) : optie;
        for(i=0;i <10; i++)
            debug_invoer[i]=0;
        break;
    }
    case belasting:{
        Wis_debug_console();
        Debug_puts(Belasting_menu);
        while(Enter == false);
        Enter = false;
        uint8_t gekozen_optie = debug_invoer[0]-48;
        switch(gekozen_optie){
          case 4:
           huidige_status = optie;
           break;
          default:
           break;
         }
         int i;
         for(i=0;i <10; i++)
           debug_invoer[i]=0;
        break;
    }
    case MCU:{
        Wis_debug_console();
        Debug_puts(MCU_menu);
        while(Enter == false);
        Enter = false;
        uint8_t gekozen_optie = debug_invoer[0]-48;
        switch(gekozen_optie){
        case 1:
            emuleer_MCU(TTL_I2C_initialisatie);
            break;
        case 2:
            emuleer_MCU(i2c_test_MCU_testrun);
            break;
        case 3:
            emuleer_MCU(TTL_I2C_testrun);
            break;
        case 4:
            huidige_status = optie;
           break;
        default:
            break;
        }
        int i;
        for(i=0;i <10; i++)
              debug_invoer[i]=0;
        break;
    }
    case aandrijving:{
        Wis_debug_console();
        Debug_puts(Aandrijving_menu);
        while(Enter == false);
        Enter = false;
        uint8_t gekozen_optie = debug_invoer[0]-48;
        switch(gekozen_optie){
        case 1:
            emuleer_aandrijving_i2c();
            break;
        case 2:
            emuleer_aandrijving_uart();
            break;
        case 4:
            huidige_status = optie;
           break;
        default:
            break;
        }
        int i;
        for(i=0;i <10; i++)
              debug_invoer[i]=0;
        break;
    }
    case klaar:{
            break;
    }
    }
}


