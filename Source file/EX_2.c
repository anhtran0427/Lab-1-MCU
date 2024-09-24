/*
 * EX_2.c
 *
 *  Created on: Sep 10, 2024
 *      Author: ASUS
 */
#include "EX_2.h"

uint8_t counter_2 =5;
uint8_t STATE=RED;

void singleTrafficLight(){
	switch (STATE){
	case RED:
		HAL_GPIO_WritePin(LED_RED_TEST_GPIO_Port, LED_RED_TEST_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_GREEN_TEST_GPIO_Port, LED_GREEN_TEST_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_YELLOW_TEST_GPIO_Port, LED_YELLOW_TEST_Pin, GPIO_PIN_SET);
		counter_2--;
		if (counter_2<=0){
			counter_2=3;
			STATE=GREEN;
		}
		break;
	case GREEN:
		HAL_GPIO_WritePin(LED_RED_TEST_GPIO_Port, LED_RED_TEST_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_GREEN_TEST_GPIO_Port, LED_GREEN_TEST_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_YELLOW_TEST_GPIO_Port, LED_YELLOW_TEST_Pin, GPIO_PIN_SET);
		counter_2--;
		if (counter_2<=0){
			counter_2=2;
			STATE=YELLOW;
		}
		break;
	case YELLOW:
		HAL_GPIO_WritePin(LED_RED_TEST_GPIO_Port, LED_RED_TEST_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_GREEN_TEST_GPIO_Port, LED_GREEN_TEST_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_YELLOW_TEST_GPIO_Port, LED_YELLOW_TEST_Pin, GPIO_PIN_RESET);
		counter_2--;
		if (counter_2<=0){
			counter_2=5;
			STATE=RED;
		}
		break;
	default:
		break;
	}
	return;
}

