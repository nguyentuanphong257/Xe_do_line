#include "main.h"



void GPIO_WritePin(int8 pin, int1 value)
{
    output_bit(pin, value);
}
