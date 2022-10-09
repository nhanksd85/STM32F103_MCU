/*
 * fsm_automatic.c
 *
 *  Created on: Sep 30, 2022
 *      Author: KAI
 */
#include "fsm_automatic.h"

void fsm_automatic_run(){
	switch(status){
		case INIT:
			status = AUTO_RED;
			setTimer1(5000);
			break;
		case AUTO_RED:
			//TODO
			if(timer1_flag == 1){
				status = AUTO_GREEN;
				setTimer1(3000);
			}
			if(button1_flag == 1){
				button1_flag = 0;
				status = MAN_RED;
				setTimer1(10000);
			}
			break;
		case AUTO_GREEN:
			//TODO
			if(timer1_flag == 1){
				status = AUTO_YELLOW;
				setTimer1(2000);
			}
			break;
		case AUTO_YELLOW:
			//TODO
			if(timer1_flag == 1){
				status = AUTO_RED;
				setTimer1(5000);
			}
			break;
		default:
			break;
	}
}

