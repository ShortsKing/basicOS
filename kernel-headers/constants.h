// The offsets for reach register.
#define GPIO_BASE = 0x200000,

// Controls actuation of pull up/down to ALL GPIO pins.
#define GPPUD = (GPIO_BASE + 0x94),

// Controls actuation of pull up/down for specific GPIO pin.
#define GPPUDCLK0 = (GPIO_BASE + 0x98),

// The base address for UART.
#define UART0_BASE = (GPIO_BASE + 0x1000), // for raspi4 0xFE201000, raspi2 & 3 0x3F201000, and 0x20201000 for raspi1

// The offsets for reach register for the UART.
#define UART0_DR     = (UART0_BASE + 0x00), // data register
#define UART0_RSRECR = (UART0_BASE + 0x04), // dunno, datasheet doesnt say
#define UART0_FR     = (UART0_BASE + 0x18), // flag register
#define UART0_ILPR   = (UART0_BASE + 0x20), // not in use? why is it there then?
#define UART0_IBRD   = (UART0_BASE + 0x24), // integer baud rate divisor
#define UART0_FBRD   = (UART0_BASE + 0x28), // fractional baud rate divisor
#define UART0_LCRH   = (UART0_BASE + 0x2C), // line control register
#define UART0_CR     = (UART0_BASE + 0x30), // control register
#define UART0_IFLS   = (UART0_BASE + 0x34), // interrupt FIFO level select register
#define UART0_IMSC   = (UART0_BASE + 0x38), // interrupt mask set clear register
#define UART0_RIS    = (UART0_BASE + 0x3C), // raw interrupr status register
#define UART0_MIS    = (UART0_BASE + 0x40), // masked interrupt clear register
#define UART0_ICR    = (UART0_BASE + 0x44), // interrupt clear register
#define UART0_DMACR  = (UART0_BASE + 0x48), // DMA control register
#define UART0_ITCR   = (UART0_BASE + 0x80), // integration test control register
#define UART0_ITIP   = (UART0_BASE + 0x84), // integration test input register
#define UART0_ITOP   = (UART0_BASE + 0x88), // integration test output register
#define UART0_TDR    = (UART0_BASE + 0x8C), // test data register

// The offsets for Mailbox registers
#define MBOX_BASE    = 0xB880,
#define MBOX_READ    = (MBOX_BASE + 0x00),
#define MBOX_STATUS  = (MBOX_BASE + 0x18),
#define MBOX_WRITE   = (MBOX_BASE + 0x20)
