#include "main.h"

int check_letter(char letter) {
    if (isalpha(letter) == 0) {
        return 1;
    }
    return 0;
}

void choose_letter(char *letter, char *word, int *found, int *lives) {
    scanf(" %c", letter);
    if (check_letter(*letter) == 1) {
        printf("Erreur : veuillez entrer une lettre.\n");
    } else {
        (*lives)--;
    }
}

int main() {
    setlocale(LC_ALL, ".utf8");
    char **word;
    char letter;
    int found = 0;
    int lives = 10;

    int choice = choose_word();
    if (choice == 1) {
        word = generate_word();
    } else if (choice == 2) {
        word = user_word();
    } else {
        printf("Erreur : veuillez entrer 1 ou 2.\n");
        return 1;
    }

    while (found != 1) {
        system(CLEAR_SCREEN);
        print_hangman(lives);
        print_game_state(lives, letter, *word);
        choose_letter(&letter, *word, &found, &lives);
    }

    free(word);
    return 0;
}



// Affichage du message + les barres du mot à trouver

// Demande de saisir d'une lettre + vérification de la lettre

// Si lettre trouvée, affichage de la lettre dans le mot
// Si lettre non trouvée, affichage du pendu

// Ajout de la lettre dans le tableau des lettres déjà jouées

// Vérification du pendu

// Vérification du mot
// Si mot trouvé, affichage du mot et message de victoire