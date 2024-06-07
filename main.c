#include "main.h"

void free_memory(char **word) {
    for (int i = 0; word[i] != NULL; i++) {
        free(word[i]);
    }
    free(word);
}

int check_letter(char letter) {
    if (isalpha(letter) == 0) {
        return 1;
    }
    return 0;
}

void choose_letter(char *letter) {
    scanf(" %c", letter);
    if (check_letter(*letter) == 1) {
        printf("Erreur : veuillez entrer une lettre.\n");
    }
}

void INThandler(int sig) {
    signal(sig, SIG_IGN);
    printf("\n\n   Exiting...\n");
    exit(0);
}

int main() {
    signal(SIGINT, INThandler);
    setlocale(LC_ALL, ".utf8");
    char **word;
    char letter = '\0';
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

    while (lives > 0 && found == 0) {
        system(CLEAR_SCREEN);
        print_hangman(lives);
        print_game_state(&lives, letter, word);
        choose_letter(&letter);
        check_word(&lives, word, letter);
        if (strcmp(word[0], word[1]) == 0) {
            found = 1;
            break;
        }
    }
    system(CLEAR_SCREEN);
    if (lives <= 0) {
        printf("\n   Vous avez perdu !\n");
        printf("   Le mot était : %s\n", word[0]);
    } else if (found == 1) {
        printf("\n   Vous avez trouvé !\n");
        printf("   Le mot était : %s\n", word[0]);
    }

    if (word != NULL) {
        free_memory(word);
        word = NULL;
    }
    return 0;
}
