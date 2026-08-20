#include "main.h"


void GPIO_Init(void)
{
    set_tris_a(0b00111000);
    set_tris_b(0b11000000);
    set_tris_c(0b00011110);
    setup_adc(ADC_OFF);
    setup_adc_ports(NO_ANALOGS);
}


int1 GPIO_ReadPin(int8 pin)
{
    return input(pin);
}
