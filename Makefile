CC ?= gcc
CFLAGS += -Wall
MODULES = ascii/hangman_ascii.c

ifeq ($(OS), Windows_NT)
    EXE = hangman.exe
    RM = del
else
    EXE = hangman
    RM = rm -f
endif

all:
	$(CC) $(CFLAGS) main.c $(MODULES) -o $(EXE)

help:
	@echo make all :     build hangman
	@echo make clean :   clean hangman build files

clean:
	$(RM) $(EXE)
