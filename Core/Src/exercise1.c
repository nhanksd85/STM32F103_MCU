/*
 * exercise1.c
 *
 *  Created on: Aug 31, 2024
 *      Author: KAI
 */
#include "exercise1.h"

int led_status = LED_OFF;

void init_exercise1(){

}
void led_on(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
}
void led_off(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
}
void exercise1_run(){
	switch(led_status){
		case LED_ON:
			led_on();
			if(1){
				led_status = LED_OFF;
			}
			break;
		case LED_OFF:
			led_off();
			if(1){
				led_status = LED_ON;
			}
			break;
		default:
			break;
	}
}


