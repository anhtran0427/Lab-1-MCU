/*
 * EX_1.c
 *
 *  Created on: Sep 9, 2024
 *      Author: ASUS
 */
#include "EX_1.h"
uint8_t LED_STATE=LED_YELLOW_ON;
uint8_t counter_1=2;

void ex1_run(){
	switch(LED_STATE){
	case LED_YELLOW_ON:
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
		--counter_1;
		if (counter_1<=0){
			LED_STATE=LED_RED_ON;
			counter_1=2;
		}
		break;
	case LED_RED_ON:
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
		--counter_1;
		if (counter_1<=0){
			LED_STATE=LED_YELLOW_ON;
			counter_1=2;
		}
		break;
	default:
		break;
	}
	return;
}

