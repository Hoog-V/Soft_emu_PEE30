/* --COPYRIGHT--,GPL V3
 * Copyright (c) 2021, Victor Hogeweij
 * Alle rechten voorbehouden,
 *
 * Deze software is uitgebracht onder licentie van: GPL V3. 
 * Bij het ontvangen van dit programma is er een versie van de GPL V3 licentie
 * meegeleverd. (zie het bestand LICENSE!). 
 * In dit meegeleverde bestand staan de regels voor het gebruiken, modificeren en delen van deze software.
 *
 * Hier staat de licentie kort samengevat:
 * Het gebruiken en het delen van deze software in zowel source als binair
 * formaat is toegestaan. Mits er aan de volgende eisen voldaan wordt:
 *
 * * Bij het delen van de software moet deze copyright tekst inclusief 
 *   de condities en de disclaimer in de source code blijven staan.
 * 
 * * Bij het delen van de software moeten veranderingen aan de software
 *   gedocumenteerd worden. 
 *
 * * Bij het maken van een commercieel product met deze software moet de 
 *   complete software (source code) inclusief de gemaakte veranderingen online gezet
 *   worden.
 *
 * * Bij gebruik van de software in een product of project moet de bron van deze software
 *   in de documentatie geplaatst worden.
 *
 * * De namen van de contribuanten mogen niet gebruikt worden
 *   om een product gemaakt met deze software te promoten.
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
#include <stdio.h>
#include <stdlib.h>
#include <msp430fr2476_basis.h>
#include <Debug_console.h>
#include <Debug_console_menu.h>
/**
 * main.c
 */


int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	__delay_cycles(100000);
	zet_klok_op_16mhz();
	Debug_init();
	while(1){
	    Debug_menu();
	}
}
