/*
 * led_matrix.h
 *
 *  Created on: Oct 17, 2023
 *      Author: Amyra Nguyen
 */

#ifndef INC_LED_MATRIX_H_
#define INC_LED_MATRIX_H_

#include "global.h"
#include "main.h"

void init_led_matrix();
void updateMatrixBuffer(char value);
void updateMatrixRow(int row_index);
#endif /* INC_LED_MATRIX_H_ */
