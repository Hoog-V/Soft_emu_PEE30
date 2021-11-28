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
/*
 * MCU_emu.c
 *
 *  Created on: Nov 21, 2021
 *      Author: victor
 */
#include <msp430.h>
#include <Debug_console.h>
#include <stdbool.h>
#include <MCU_emu.h>
#include <I2C.h>
unsigned char data[2];
const char testrun_i2c_uns[] =
        "----------------------------"
                "\r\n Testrun_I2C_unsafe \r\n"
                "\r\nDeze test voert een initialisatie sequence uit gevolgd met een testrun\r\n"
                "Voor de testrun kunt u kiezen uit verschillende opties: \r\n"
                "Optie 1: Random snelheid setpoint\r\n"
                "Optie 2: Gefixeerde snelheid setpoint met zelf ingestelde waarde \r\n"
                "Optie 3: Variabele Snelheid setpoint die geincrementeerd wordt met bepaalde stapgrootte\r\n"
                "\r\n Voer het getal 4 in als u terug wilt naar het vorige menu \r\n"
                "\r\n****LET OP!! Deze test let niet op de status of noodstop lijnen!****\r\n"
                "****Zorg ervoor dat het systeem zelf genoeg veiligheid bied.\r\n"
                "****U bent zelf verantwoordelijk voor de schade die u aanricht****\r\n"

                "\r\nOm een optie te kiezen voer het getal in en druk op ENTER...\r\n";

void emuleer_MCU(uint8_t optie)
{
bool MCU = true;
do{
    Wis_debug_console();
    Debug_puts(testrun_i2c_uns);
    while (Enter == false);
    Enter = false;
    uint8_t gekozen_optie = debug_invoer[0] - 48;
    switch (gekozen_optie)
    {
    case 1:
        testrun_rdm();
    case 4:
        MCU=false;
        break;
    }
    int i;
    for (i = 0; i < 10; i++)
        debug_invoer[i] = 0;
}
while(MCU == true);
}

void initseq_MCU(){
    Debug_puts("\r\n Starten met initialisatie sequence...\r\n");
    P2OUT |= BIT1;

}

void testrun_rdm(){
Wis_debug_console();
Debug_puts("----------------------------\r\n"
           "Testrun I2C random snelheid setpoint\r\n");
initseq_MCU();
Debug_puts("I2C peripheral initialiseren...\r\n");
I2C_init_master();
Debug_puts("I2C peripheral geinitialiseerd!\r\n");
int RPM = 4000;
Debug_printf("Snelheid setpoint instellen op: %i\r\n",RPM);
data[0] = RPM & 0xFF;
data[1] = RPM>>8 & 0xFF;
I2C_send(0x48,0x01,data,2);
int Max_stroom = 2000;
Debug_printf("Maximale stroom instellen op: %i\r\n",Max_stroom);
data[0] = Max_stroom & 0xFF;
data[1] = Max_stroom>>8 & 0xFF;
I2C_send(0x48,0x02,data,2);
int Max_spanning = 12000;
Debug_printf("Maximale aandrijfspanning instellen op: %i\r\n",Max_spanning);
data[0] = Max_spanning & 0xFF;
data[1] = Max_spanning>>8 & 0xFF;
I2C_send(0x48,0x03,data,2);
Debug_puts("Start signaal sturen...\r\n");
data[0] = 1;
data[1] = 0;
I2C_send(0x48,0x00,data,2);
while (Enter == false);
Enter = false;

}
