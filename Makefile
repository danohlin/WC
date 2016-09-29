# Makefile for asg2

CC=gcc
CFLAGS=-c -Wall

objects = Main.o Readline.o CountsUpdate.o CountWord.o ToString.o


all : WC



WC : $(objects)
	$(CC) $(objects) -o WC

Main.o : Main.c Definition.h
	$(CC) $(CFLAGS) Main.c

Readline.o : Readline.c Definition.h ExternalVar.h
	$(CC) $(CFLAGS) Readline.c

CountsUpdate.o : CountsUpdate.c Definition.h ExternalVar.h
	$(CC) $(CFLAGS) CountsUpdate.c

CountWord.o : CountWord.c Definition.h ExternalVar.h
	$(CC) $(CFLAGS) CountWord.c

ToString.o : ToString.c Definition.h ExternalVar.h
	$(CC) $(CFLAGS) ToString.c


clean : WC $(objects)
	rm WC $(objects)
