/*
 * EX_3.h
 *
 *  Created on: Sep 10, 2024
 *      Author: ASUS
 */

#ifndef INC_EX_3_H_
#define INC_EX_3_H_

#include "main.h"

extern uint8_t counter_3 ;
extern uint8_t DIRECTION;

extern void trafficLight();
void horizontalDisplay(uint8_t DIRECTION);
void verticalDisplay(uint8_t DIRECTION);

#define VERTICAL 1
#define HORIZONTAL 0
#endif /* INC_EX_3_H_ */
