#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <locale.h>

#ifdef WIN32
    #define CLEAR_SCREEN "cls"
#else
    #define CLEAR_SCREEN "clear"
#endif

// Define the hangman ASCII art
void print_hangman(int index);

// Function to print the game state
void print_game_state(int lives, char last_guess, const char *word);

#endif