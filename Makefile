boot.o: boot.c
  as c boot.s -o boot.o

kernel.o: kernel.c
  gcc -ffreestanding -c kernel.c -o kernel.o -O2 -Wall -Wextra

myos.elf kernel8.img: linker.ld boot.o kernel.o
  gcc -T linker.ld -o myos.elf -ffreestanding -O2 -nostdlib boot.o kernel.o -lgcc 
  objcopy myos.elf -O binary kernel8.img
