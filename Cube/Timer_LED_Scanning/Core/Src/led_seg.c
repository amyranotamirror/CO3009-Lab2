/*
 * led_seg.c
 *
 *  Created on: Oct 3, 2023
 *      Author: Amyra Nguyen
 */


#include "led_seg.h"
int led_seg_on[11] = {0x40, 0x79, 0x24, 0x30, 0x19, 0x12, 0x02, 0x78, 0x00, 0xFF};
int led_seg_off[11] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F, 0x00};

void init_led_seg(){
	// Setup port & pin for enabling led segments
	seg_enable_pin[0] = (GPIO_config){EN_A_GPIO_Port, EN_A_Pin};
	seg_enable_pin[1] = (GPIO_config){EN_B_GPIO_Port, EN_B_Pin};
	seg_enable_pin[2] = (GPIO_config){EN_C_GPIO_Port, EN_C_Pin};
	seg_enable_pin[3] = (GPIO_config){EN_D_GPIO_Port, EN_D_Pin};
	seg_enable_pin[4] = (GPIO_config){DOT_GPIO_Port, DOT_Pin};
	for(uint16_t index = 0; index < NUM_LED; index++)
		disable_led_seg(index);
}
void enable_led_seg(int index){
	HAL_GPIO_WritePin(seg_enable_pin[index].port, seg_enable_pin[index].pin, GPIO_PIN_RESET);
}
void disable_led_seg(int index){
	HAL_GPIO_WritePin(seg_enable_pin[index].port, seg_enable_pin[index].pin, GPIO_PIN_SET);
}
void display7SEG(int num, GPIO_TypeDef *port){
	if(num >= MIN_NUM && num <= MAX_NUM){
		port->ODR = (port->ODR | led_seg_on[num]) & ~led_seg_off[num];
		return;
	}
	port->ODR = (port->ODR | led_seg_on[10]) & ~led_seg_off[10];
}
