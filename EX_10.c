/*
 * EX_5.c
 *
 *  Created on: Sep 11, 2024
 *      Author: ASUS
 */

/*
 * EX_4.c
 *
 *  Created on: Sep 10, 2024
 *      Author: ASUS
 */


#include "EX_10.h"

uint8_t min =0;
uint8_t sec=0;
uint8_t hr=0;

void clockUpdate(){
	sec++;
	if (sec>=60){
		sec=0;
		min++;
	}
	if (min>=60){
		min=0;
		hr++;
	}
	if (hr>=12){
		hr=0;
	}
	clearAllClock();
	setNumberOnClock(sec/5);
	setNumberOnClock(min/5);
	setNumberOnClock(hr);
	return;
}


