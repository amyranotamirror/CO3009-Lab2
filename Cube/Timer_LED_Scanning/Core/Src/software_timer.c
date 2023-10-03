/*
 * software_timer.c
 *
 *  Created on: Oct 3, 2023
 *      Author: Amyra Nguyen
 */


#include "software_timer.h"
int timer_limit[NUM_TIMER] = {SEG_TIMER_DURATION};
void init_software_timer(){
	for(uint16_t index = 0; index < NUM_TIMER; index++){
		timer[index] = (timer_config){timer_limit[index], timer_limit[index], 0};
	}
}
void set_timer(int index){
	timer[index].counter = timer[index].limit;
	timer[index].flag = 0;
}
void run_timer(){
	for(int index = 0; index < NUM_TIMER; index++){
		if(timer[index].counter > 0){
			timer[index].counter--;
			if(timer[index].counter <= 0){
				timer[index].flag = 1;
			}
		}
	}
}
