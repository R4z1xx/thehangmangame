#include "../main.h"

void check_word(int *lives, char **word, char last_guess) {
    int i;
    int found = 0;
    for (i = 0; i <= strlen(word[0]); i++) {
        if (word[0][i] == last_guess) {
            word[1][i] = last_guess;
            found = 1;
        }
    }
    if (!found) {
        (*lives)--;
    }
}

void print_game_state(int *lives, char last_guess, char **word) {
    printf("\n   Vie(s) : %d       Dernière réponse : %c\n\n", *lives, last_guess);
    printf("   %s\n\n", word[1]);
    printf("   Saisissez une lettre, puis appuyez sur [Entrée] : ");
}