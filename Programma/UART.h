/*
 * UART.h
 *
 *  Created on: Mar 15, 2021
 *      Author: Victor, the one and only
 */

#ifndef UART_H_
#define UART_H_
#include <stdint.h>
#include <stdbool.h>

int parse_uart_data(char * data,uint8_t size, int * parsed_data);
void UART_init(void);
void UART_puts(const char *str);
int UART_recv(char * data);
#endif /* UART_H_ */
