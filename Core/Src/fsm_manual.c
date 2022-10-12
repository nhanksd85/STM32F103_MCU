
#include "fsm_manual.h"

void fsm_manual_run(){
	switch(status){
		case MAN_RED:
			//TODO
			if(timer1_flag == 1){
				timer1_flag = 0;
				status = AUTO_RED;
				setTimer1(5000);
			}
			if(button1_flag == 1){
				button1_flag = 0;
				status = MAN_GREEN;
				setTimer1(10000);
			}
			break;
		case MAN_GREEN:
			break;
		case MAN_YELLOW:
			break;
		default:
			break;
	}
}
