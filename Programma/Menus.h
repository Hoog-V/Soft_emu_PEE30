/*
 * Menus.h
 *
 *  Created on: 21 nov. 2021
 *      Author: victor
 */

#ifndef MENUS_H_
#define MENUS_H_



const char opties_menu[] ="----------------------------"
                "\r\n Welkom in het opties menu\r\n"
                "\r\nWelk systeem wilt u emuleren?\r\n"
                "\r\nOptie 1: De belasting naar de aandrijving (UART) \r\n"
                "Optie 2: De MCU naar de aandrijving (I2C) \r\n"
                "Optie 3: De aandrijving\r\n"

                "\r\nOm een optie te kiezen voer het getal in en druk op ENTER...\r\n";

const char MCU_menu[]= "----------------------------"
        "\r\n Welkom in het MCU submenu\r\n"
        "\r\nWat wilt u emuleren?\r\n"
        "\r\nOptie 1: De initialisatie sequence \r\n"
        "Optie 2: De I2C verbinding (met dummy waarden)\r\n"
        "Optie 3: Optie 1 en 2 gecombineerd afgesloten met noodstop test\r\n"
        "Optie 4: Terug naar vorig menu\r\n"

        "\r\nOm een optie te kiezen voer het getal in en druk op ENTER...\r\n";

const char Belasting_menu[] = "----------------------------"
        "\r\n Welkom in het belasting submenu\r\n"
        "\r\nWat wilt u emuleren?\r\n"
        "\r\nOptie 1: De TTL lijn(en) \r\n"
        "Optie 2: De UART verbinding (met dummy waarden)\r\n"
        "Optie 3: Optie 1 en 2 gecombineerd\r\n"
        "Optie 4: Terug naar vorig menu\r\n"
        "\r\nOm een optie te kiezen voer het getal in en druk op ENTER...\r\n";

const char Aandrijving_menu[] = "----------------------------"
        "\r\n Welkom in het aandrijving submenu\r\n"
        "\r\nWat wilt u emuleren?\r\n"
        "\r\nOptie 1: Aandrijving als I2C slave \r\n"
        "Optie 2: Aandrijving communicatie via UART \r\n"
        "Optie 3: Optie 1 en 2 gecombineerd\r\n"
        "Optie 4: Terug naar vorig menu\r\n"
        "Tip! Doe eerst een initialisatie in het MCU submenu\r\n"
        "\r\nOm een optie te kiezen voer het getal in en druk op ENTER...\r\n";




#endif /* MENUS_H_ */
