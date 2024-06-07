#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <locale.h>

#ifdef WIN32
    #define CLEAR_SCREEN "cls"
#else
    #define CLEAR_SCREEN "clear"
#endif

#define MAX_WORD_LENGTH 100

// Define the hangman ASCII art
void print_hangman(int index);

// Function to print the game state
void print_game_state(int lives, char last_guess, const char *word);

int choose_word();
char* user_word();
char* generate_word();


#endif