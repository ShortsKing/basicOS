#include <stddef.h>
#include <stdint.h>
#include <uart.h>
#include <gpu.h>

#if defined(__cplusplus)
extern "C" /* Use C linkage for kernel_main. */
#endif

#ifdef AARCH64
// arguments for AArch64
void kernel_main(uint64_t dtb_ptr32, uint64_t x1, uint64_t x2, uint64_t x3)
#else
// arguments for AArch32
void kernel_main(uint32_t r0, uint32_t r1, uint32_t atags)
#endif
{
	// initialize UART for Raspi2
	uart_init(2);
	uart_puts("Hello, kernel World!\r\n");

	while (1)
		uart_putc(uart_getc());
}
