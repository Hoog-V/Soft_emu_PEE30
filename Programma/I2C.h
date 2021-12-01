/*
 * I2C.h
 *
 *  Created on: Nov 22, 2021
 *      Author: victor
 */

#ifndef I2C_H_
#define I2C_H_
#include <stdint.h>

void I2C_init_master();
void I2C_init_slave();
void I2C_master_write(uint8_t slaveaddr, uint8_t register_id, uint8_t * Data, uint8_t numbytes);
void I2C_slave_recv(uint8_t register_id, uint8_t * Data);
void I2C_master_recv(uint8_t slaveaddr,uint8_t register_id, uint8_t *Data, uint8_t numbytes);
void I2C_setreg(uint8_t register_id,uint16_t Data);
#endif /* I2C_H_ */
