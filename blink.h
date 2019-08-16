#define AHB1            0x40023800UL
#define RCC_AHB1RSTR    *((unsigned long *)((AHB1)+0x10UL))
#define RCC_AHB1ENR     *((unsigned long *)((AHB1)+0x30UL))

#define GPIOA           0x40020000UL
#define GPIOA_MODER     *((unsigned long *)((GPIOA)+0x00UL))
#define GPIOA_OTYPER    *((unsigned long *)((GPIOA)+0x04UL))
#define GPIOA_ODR       *((unsigned long *)((GPIOA)+0x14UL))

#define INTERVAL        500000

int main(void);
