/*
 * EX_4.c
 *
 *  Created on: Sep 10, 2024
 *      Author: ASUS
 */


#include "EX_4.h"

uint8_t counter_4=0;
void segTest(){
	if (counter_4>=10)counter_4=0;
	display7SEG(counter_4++);
	return;
}
void display7SEG(uint8_t num){
	switch(num){
	case 9:
		HAL_GPIO_WritePin(a_SEG_GPIO_Port, a_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b_SEG_GPIO_Port, b_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c_SEG_GPIO_Port, c_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d_SEG_GPIO_Port, d_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e_SEG_GPIO_Port, e_SEG_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(f_SEG_GPIO_Port, f_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g_SEG_GPIO_Port, g_SEG_Pin, GPIO_PIN_RESET);
		break;
	case 8:
		HAL_GPIO_WritePin(a_SEG_GPIO_Port, a_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b_SEG_GPIO_Port, b_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c_SEG_GPIO_Port, c_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d_SEG_GPIO_Port, d_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e_SEG_GPIO_Port, e_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(f_SEG_GPIO_Port, f_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g_SEG_GPIO_Port, g_SEG_Pin, GPIO_PIN_RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(a_SEG_GPIO_Port, a_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b_SEG_GPIO_Port, b_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c_SEG_GPIO_Port, c_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d_SEG_GPIO_Port, d_SEG_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(e_SEG_GPIO_Port, e_SEG_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(f_SEG_GPIO_Port, f_SEG_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(g_SEG_GPIO_Port, g_SEG_Pin, GPIO_PIN_SET);
		break;
	case 6:
		HAL_GPIO_WritePin(a_SEG_GPIO_Port, a_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b_SEG_GPIO_Port, b_SEG_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(c_SEG_GPIO_Port, c_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d_SEG_GPIO_Port, d_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e_SEG_GPIO_Port, e_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(f_SEG_GPIO_Port, f_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g_SEG_GPIO_Port, g_SEG_Pin, GPIO_PIN_RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(a_SEG_GPIO_Port, a_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b_SEG_GPIO_Port, b_SEG_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(c_SEG_GPIO_Port, c_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d_SEG_GPIO_Port, d_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e_SEG_GPIO_Port, e_SEG_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(f_SEG_GPIO_Port, f_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g_SEG_GPIO_Port, g_SEG_Pin, GPIO_PIN_RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(a_SEG_GPIO_Port, a_SEG_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(b_SEG_GPIO_Port, b_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c_SEG_GPIO_Port, c_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d_SEG_GPIO_Port, d_SEG_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(e_SEG_GPIO_Port, e_SEG_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(f_SEG_GPIO_Port, f_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g_SEG_GPIO_Port, g_SEG_Pin, GPIO_PIN_RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(a_SEG_GPIO_Port, a_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b_SEG_GPIO_Port, b_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c_SEG_GPIO_Port, c_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d_SEG_GPIO_Port, d_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e_SEG_GPIO_Port, e_SEG_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(f_SEG_GPIO_Port, f_SEG_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(g_SEG_GPIO_Port, g_SEG_Pin, GPIO_PIN_RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(a_SEG_GPIO_Port, a_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b_SEG_GPIO_Port, b_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c_SEG_GPIO_Port, c_SEG_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(d_SEG_GPIO_Port, d_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e_SEG_GPIO_Port, e_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(f_SEG_GPIO_Port, f_SEG_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(g_SEG_GPIO_Port, g_SEG_Pin, GPIO_PIN_RESET);
		break;
	case 1:
		HAL_GPIO_WritePin(a_SEG_GPIO_Port, a_SEG_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(b_SEG_GPIO_Port, b_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c_SEG_GPIO_Port, c_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d_SEG_GPIO_Port, d_SEG_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(e_SEG_GPIO_Port, e_SEG_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(f_SEG_GPIO_Port, f_SEG_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(g_SEG_GPIO_Port, g_SEG_Pin, GPIO_PIN_SET);
		break;
	case 0:
		HAL_GPIO_WritePin(a_SEG_GPIO_Port, a_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b_SEG_GPIO_Port, b_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c_SEG_GPIO_Port, c_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d_SEG_GPIO_Port, d_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e_SEG_GPIO_Port, e_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(f_SEG_GPIO_Port, f_SEG_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g_SEG_GPIO_Port, g_SEG_Pin, GPIO_PIN_SET);
		break;
	default:
		break;
	}
}
