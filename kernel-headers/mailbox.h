#include <stddef.h>
#include <stdint.h>

static uint32_t MMIO_BASE;

// The MMIO area base address, depends on board type
static inline void mmio_init()
{
	uint32_t reg;
	char *board;

	/* read the system register */
#ifdef AARCH64
	asm volatile ("mrs %x0, midr_el1" : "=r" (reg));
#else
	// assume aarch64 anyway ;)
	asm volatile ("mrs 15,0,%0,c0,c0,0" : "=r" (reg));
#endif

	/* get the PartNum, detect board and MMIO base address */
	switch ((reg >> 4) & 0xFFF) {
		case 0xB76: board = "Rpi1"; MMIO_BASE = 0x20000000; break;
		case 0xC07: board = "Rpi2"; MMIO_BASE = 0x3F000000; break;
		case 0xD03: board = "Rpi3"; MMIO_BASE = 0x3F000000; break;
		case 0xD08: board = "Rpi4"; MMIO_BASE = 0xFE000000; break;
		default:    board = "????"; MMIO_BASE = 0x20000000; break;
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
