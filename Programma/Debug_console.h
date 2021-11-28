/*
 * UART.h
 *
 *  Created on: Mar 15, 2021
 *      Author: Victor, the one and only
 */

#ifndef DEBUG_CONSOLE_H_
#define DEBUG_CONSOLE_H_
#include <stdint.h>
#include <stdbool.h>

extern volatile char debug_invoer[10];
extern bool Enter;

void Debug_init(void);
void Debug_putc(unsigned char c);
void Debug_puts(const char *str);
void Debug_printf(char *format, ...);
void Wis_debug_console();
#endif /* DEBUG_CONSOLE_H_ */
