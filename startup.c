extern unsigned long _estack;
extern unsigned long _sidata;
extern unsigned long _sdata;
extern unsigned long _edata;
extern unsigned long _sbss;
extern unsigned long _ebss;

extern int main(void);

unsigned long default_handler(void);

__attribute__((naked)) unsigned long reset()
{
    unsigned long *source = &_sidata;
    unsigned long *destination = &_sdata;

    while (destination < &_edata)
    {
        *destination++ = *source++;
    }

    destination = &_sbss;
    while (destination < &_ebss)
    {
        *destination++ = 0;
    }

    main();
}

__attribute__((section(".vector")))
const unsigned long vector_table[] =
{
    (unsigned long)&_estack,
    (unsigned long)reset,
    (unsigned long)default_handler
};

unsigned long default_handler(void)
{
    while (1);
}
