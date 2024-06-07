#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <locale.h>
#include <ctype.h>
#include <signal.h>

#ifdef WIN32
    #define CLEAR_SCREEN "cls"
#else
    #define CLEAR_SCREEN "clear"
#endif

#define MAX_WORD_LENGTH 100

typedef struct {
    char **word;
    char letter;
    int found;
    int lives;
} hangman;

void free_memory(char **word);
int check_letter(char letter);
void choose_letter(char *letter);
void INThandler(int sig);

void print_hangman(int index);

void check_word(int *lives, char **word, char last_guess);
void print_game_state(int *lives, char last_guess, char **word);

int choose_word();
char** user_word();
char** generate_word();

#endif