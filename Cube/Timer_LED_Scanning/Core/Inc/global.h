/*
 * global.h
 *
 *  Created on: Oct 3, 2023
 *      Author: Amyra Nguyen
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

/* Include */
#include "main.h"

/* Program define */
#define NUM_LED 4
#define NUM_TIMER 4
#define NUM_COL 8
#define NUM_ROW 8

#define SEG_TIMER_DURATION 25
#define SEG_TIMER_INDEX 0
#define DOT_TIMER_DURATION 50
#define DOT_TIMER_INDEX 1
#define CLOCK_TIMER_DURATION 100
#define CLOCK_TIMER_INDEX 2
#define MATRIX_TIMER_DURATION 9
#define MATRIX_TIMER_INDEX 3

typedef struct{
	GPIO_TypeDef* port;
	uint16_t pin;
} GPIO_config;
typedef struct{
	int limit;
	int counter;
	int flag;
} timer_config;

/* Program variables */
GPIO_config seg_enable_pin[NUM_LED + 1];// DOT
GPIO_config matrix_enable_pin[NUM_COL];
timer_config timer[NUM_TIMER];
extern int timer_limit[NUM_TIMER];
extern int led_buffer[NUM_LED];

#endif /* INC_GLOBAL_H_ */
