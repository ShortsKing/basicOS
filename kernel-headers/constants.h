enum
{
  // The offsets for reach register.
  GPIO_BASE = 0x200000,

  // Controls actuation of pull up/down to ALL GPIO pins.
  GPPUD = (GPIO_BASE + 0x94),

  // Controls actuation of pull up/down for specific GPIO pin.
  GPPUDCLK0 = (GPIO_BASE + 0x98),

  // The base address for UART.
  UART0_BASE = (GPIO_BASE + 0x1000), // for raspi4 0xFE201000, raspi2 & 3 0x3F201000, and 0x20201000 for raspi1

  // The offsets for reach register for the UART.
  UART0_DR     = (UART0_BASE + 0x00), // data register
  UART0_RSRECR = (UART0_BASE + 0x04), // dunno, datasheet doesnt say
  UART0_FR     = (UART0_BASE + 0x18), // flag register
  UART0_ILPR   = (UART0_BASE + 0x20), // not in use? why is it there then?
  UART0_IBRD   = (UART0_BASE + 0x24), // integer baud rate divisor
  UART0_FBRD   = (UART0_BASE + 0x28), // fractional baud rate divisor
  UART0_LCRH   = (UART0_BASE + 0x2C), // line control register
  UART0_CR     = (UART0_BASE + 0x30), // control register
  UART0_IFLS   = (UART0_BASE + 0x34), // interrupt FIFO level select register
  UART0_IMSC   = (UART0_BASE + 0x38), // interrupt mask set clear register
  UART0_RIS    = (UART0_BASE + 0x3C), // raw interrupr status register
  UART0_MIS    = (UART0_BASE + 0x40), // masked interrupt clear register
  UART0_ICR    = (UART0_BASE + 0x44), // interrupt clear register
  UART0_DMACR  = (UART0_BASE + 0x48), // DMA control register
  UART0_ITCR   = (UART0_BASE + 0x80), // integration test control register
  UART0_ITIP   = (UART0_BASE + 0x84), // integration test input register
  UART0_ITOP   = (UART0_BASE + 0x88), // integration test output register
  UART0_TDR    = (UART0_BASE + 0x8C), // test data register

  // The offsets for Mailbox registers
  MBOX_BASE    = 0xB880,
  MBOX_READ    = (MBOX_BASE + 0x00),
  MBOX_STATUS  = (MBOX_BASE + 0x18),
  MBOX_WRITE   = (MBOX_BASE + 0x20)
};
