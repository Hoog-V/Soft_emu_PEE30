/*
 * MCU_emu.h
 *
 *  Created on: Nov 21, 2021
 *      Author: victor
 */

#ifndef MCU_EMU_H_
#define MCU_EMU_H_

enum mcu_emu_opt{TTL_I2C_initialisatie, i2c_test_MCU_testrun, TTL, TTL_I2C_testrun};

void emuleer_MCU(uint8_t optie);
void initseq_MCU();
void testrun_rdm();
void testrun_fixed();
void testrun_step();


#endif /* MCU_EMU_H_ */
