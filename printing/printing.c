#include "../main.h"

// Function to print the game state
void print_game_state(int lives, char last_guess, const char *word) {
    if (lives == 0) {
        printf("\n   Vous avez perdu !\n\n");
    } else {
        printf("\n   Vie(s) : %d       Dernière réponse : %c\n\n", lives, last_guess);
        printf("   %s\n\n", word);
        printf("   Saisissez une lettre, puis appuyez sur [Entrée] : ");
    } 
}
