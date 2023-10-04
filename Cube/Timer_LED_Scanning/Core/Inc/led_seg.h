/*
 * led_seg.h
 *
 *  Created on: Oct 3, 2023
 *      Author: Amyra Nguyen
 */

#ifndef INC_LED_SEG_H_
#define INC_LED_SEG_H_
/* Include */
#include "global.h"
/* Program define */
#define MAX_NUM 9
#define MIN_NUM 0
extern int leg_seg_on[11];
extern int led_seg_off[11];

/* Program functions */
void init_led_seg();
void enable_led_seg(int index);
void disable_led_seg(int index);
void display7SEG(int num, GPIO_TypeDef* port);
void update7SEG(int index);

#endif /* INC_LED_SEG_H_ */
