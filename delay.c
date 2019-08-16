#include "delay.h"

void delay(int c)
{
    volatile int counter;
    for (counter=0; counter<c; counter++);
}
