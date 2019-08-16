#include "blink.h"
#include "delay.h"

int main(void)
{
    RCC_AHB1ENR |= (1 << 0x0);
    GPIOA_MODER |= (1 << 0xA);

    while (1)
    {
        GPIOA_ODR ^= (1 << 0x5);
        delay(INTERVAL);
    }
    return 0;
}
