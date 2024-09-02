/*
 * exercise10.c
 *
 *  Created on: Sep 2, 2024
 *      Author: KAI
 */
#include "exercise10.h"

void init_exercise10(){
	HAL_GPIO_TogglePin(LED_1_GPIO_Port, LED_1_Pin);
	HAL_GPIO_TogglePin(LED_2_GPIO_Port, LED_2_Pin);
	HAL_GPIO_TogglePin(LED_3_GPIO_Port, LED_3_Pin);
	HAL_GPIO_TogglePin(LED_4_GPIO_Port, LED_4_Pin);
	HAL_GPIO_TogglePin(LED_5_GPIO_Port, LED_5_Pin);
	HAL_GPIO_TogglePin(LED_6_GPIO_Port, LED_6_Pin);

	HAL_GPIO_TogglePin(LED_7_GPIO_Port, LED_7_Pin);
	HAL_GPIO_TogglePin(LED_8_GPIO_Port, LED_8_Pin);
	HAL_GPIO_TogglePin(LED_9_GPIO_Port, LED_9_Pin);
	HAL_GPIO_TogglePin(LED_10_GPIO_Port, LED_10_Pin);
	HAL_GPIO_TogglePin(LED_11_GPIO_Port, LED_11_Pin);
	HAL_GPIO_TogglePin(LED_12_GPIO_Port, LED_12_Pin);

}
void exercise10_run(){

}
