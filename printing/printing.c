#include "../main.h"

// Function to print the game state
void print_game_state(int lives, char last_guess, char **word) {
    if (lives == 0) {
        printf("\n   Vous avez perdu !\n\n");
        for (int i = 0; word[i] != NULL; i++) {
            free(word[i]);
        }
        free(word);
        exit(0);
    } else {
        printf("\n   Vie(s) : %d       Dernière réponse : %c\n\n", lives, last_guess);
        printf("   %s\n\n", word[1]);
        printf("   Saisissez une lettre, puis appuyez sur [Entrée] : ");
    } 
}