#include "include/os.h"

extern void dw8250_uart_init(void);
extern void page_init(void);

void start_kernel(void)
{
    dw8250_uart_init();
    dw8250_uart_puts("Hello, RVOS!\n");

    page_init();

    while(1){};

}