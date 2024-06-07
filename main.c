#include "main.h"

typedef struct {
    char **word;
    char letter;
    int found;
    int lives;
} Game;

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
    
    Game game;
    game.letter = '\0';
    game.found = 0;
    game.lives = 10;

    int choice = choose_word();
    if (choice == 1) {
        game.word = generate_word();
    } else if (choice == 2) {
        game.word = user_word();
    } else {
        printf("Erreur : veuillez entrer 1 ou 2.\n");
        return 1;
    }

    while (game.lives > 0 && game.found == 0) {
        system(CLEAR_SCREEN);
        print_hangman(game.lives);
        print_game_state(&game.lives, game.letter, game.word);
        choose_letter(&game.letter);
        check_word(&game.lives, game.word, game.letter);
        if (strcmp(game.word[0], game.word[1]) == 0) {
            game.found = 1;
            break;
        }
    }
    
    system(CLEAR_SCREEN);
    if (game.lives <= 0) {
        printf("\n   Vous avez perdu !\n");
        printf("   Le mot était : %s\n", game.word[0]);
    } else if (game.found == 1) {
        printf("\n   Vous avez trouvé !\n");
        printf("   Le mot était : %s\n", game.word[0]);
    }

    if (game.word != NULL) {
        free_memory(game.word);
        game.word = NULL;
    }
    return 0;
}
