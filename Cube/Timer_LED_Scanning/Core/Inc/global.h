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
#define NUM_TIMER 2

#define SEG_TIMER_DURATION 50
#define SEG_TIMER_INDEX 0
#define DOT_TIMER_DURATION 100
#define DOT_TIMER_INDEX 1

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
timer_config timer[NUM_TIMER];
extern int timer_limit[NUM_TIMER];
extern int led_buffer[NUM_LED];

#endif /* INC_GLOBAL_H_ */
