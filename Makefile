CC ?= gcc
CFLAGS += -Wall
MODULES = ascii/hangman_ascii.c printing/printing.c wordlist/wordlist.c

ifeq ($(OS), Windows_NT)
    EXE = hangman.exe
    RM = del
else
    EXE = hangman
    RM = rm -f
endif

help:
	@echo make all :     build hangman
	@echo make clean :   clean hangman build files

all:
	$(CC) $(CFLAGS) main.c $(MODULES) -o $(EXE)

clean:
	$(RM) $(EXE)
