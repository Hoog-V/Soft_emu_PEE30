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
 
 
#include <Debug_console.h>
#include <I2C.h>

void emuleer_aandrijving(){
    Wis_debug_console();
    I2C_init_slave();
    I2C_setreg(0x03,0xFFFF);
    Debug_puts("I2C_slave_test\r\n");
    while (Enter == false);
    Enter = false;
}



