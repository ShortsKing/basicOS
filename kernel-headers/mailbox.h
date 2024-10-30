

static uint32_t MMIO_BASE;
// The MMIO area base address, depends on board type
static inline void mmio_init(int raspi)
{
  switch (raspi) {
    case 2:  MMIO_BASE = 0x3F000000; break; // for raspi2
    case 3:  MMIO_BASE = 0x3F000000; break; // for raspi3 (same as raspi2)
    case 4:  MMIO_BASE = 0xFE000000; break; // for raspi4
    default: MMIO_BASE = 0x20000000; break; // for raspi1, raspi zero etc.
  }
}
// Memory-Mapped I/O output
static inline void mmio_write(uint32_t reg, uint32_t data)
{
	*(volatile uint32_t*)(MMIO_BASE + reg) = data;
}
// Memory-Mapped I/O input
static inline uint32_t mmio_read(uint32_t reg)
{
	return *(volatile uint32_t*)(MMIO_BASE + reg);
}

/*unsigned int mbox_call(unsigned char ch)
{
	// 28-bit address (MSB) and 4-bit value (LSB)
	unsigned int r = ((unsigned int)((long) &mbox) &~ 0xF) | (ch & 0xF);
	
	// Wait until we can write
	while (mmio_read(MBOX_STATUS) & MBOX_FULL);
	
	// Write the address of our buffer to the mailbox with the channel appended
	mmio_write(MBOX_WRITE, r);
	
	while (1) {
	// Is there a reply?
	while (mmio_read(MBOX_STATUS) & MBOX_EMPTY);
	
	// Is it a reply to our message?
	if (r == mmio_read(MBOX_READ)) return mbox[1]==MBOX_RESPONSE; // Is it successful?
	   
	}
	//doesn't run you don't have to worry about this.
	return 0;
}*/
