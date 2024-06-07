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
	@echo ---------------- help ----------------
	@echo make all   : build hangman
	@echo make clean : clean hangman build files
	@echo make check : check for memory leaks

all:
	$(CC) $(CFLAGS) main.c $(MODULES) -o $(EXE)

clean:
	$(RM) $(EXE)

check:
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes $(EXE)
