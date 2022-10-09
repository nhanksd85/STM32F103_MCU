#ifndef __SOFTWARE_TIMER_
#define __SOFTWARE_TIMER_

extern int timer1_flag;
extern int timer2_flag;

void setTimer1(int duration);
void clearTimer1();
void setTimer2(int duration);

void timerRun();

#endif
