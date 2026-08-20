#include "main.h"

#define SERVO_TICK_US  50  //Ttimer1_isr = 10us

void Servo_Init(){
   GPIO_WritePin(SERVO,0);
   servo_duty = 0;
}

void Servo_SetPulse(int16 pulse_us){
   if (pulse_us < 500)  pulse_us = 500;
   if (pulse_us > 2500) pulse_us = 2500;
 
   servo_duty = (unsigned int16)((pulse_us + (SERVO_TICK_US / 2)) / SERVO_TICK_US);
}
