#Makefile for XCH's Project
#Create by Yeonji 2017/02/05

TARGET=avr
MMCU=attiny2313
OPTION=-Wall -Wextra

AR=avr-ar
AS=avr-as
CC=avr-gcc
CCAR=avr-gcc-ar
CFLAGS=-O2 -mmcu=$(MMCU) $(OPTION)
LD=avr-ld
NM=avr-nm
OBJCOPY=avr-objcopy
OBJDUMP=avr-objdump
RAMLIB=avr-ranlib
SIZEOF=avr-size

Download:all
	avrdude -p t2313 -c usbtiny -D -P -U flash:w:lift.hex:i -v

all:lift.hex

lift.hex:lift.elf
	avr-objcopy lift.elf -O ihex lift.hex

lift.elf:timer.o
	$(CC) $(CFLAGS) lift.c -o lift.elf

timer.o:

