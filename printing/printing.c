#include "../main.h"

// Function to print the game state
void print_game_state(int lives, char last_guess, const char *word) {
    // system(CLEAR_SCREEN);
    hangman_ascii(lives); // Print the hangman (ASCII art)
    printf("Vie(s) : %d       Dernière réponse : %c\n\n", lives, last_guess);
    printf("%s\n\n", word);
    printf("Saisissez une lettre, puis appuyez sur [Entrée] : ");
}
