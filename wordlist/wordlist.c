#include "../main.h"

int choose_word() {
    int choice;
    do {
        printf("Voulez-vous un mot aléatoire ou choisir un mot ?\n");
        printf("1. Mot aléatoire\n");
        printf("2. Choisir un mot\n");
        printf("Entrez votre choix (1-2): ");
        if (scanf("%d", &choice) != 1 || (choice < 1 || choice > 2)) {
            while (getchar() != '\n');
            continue;
        }
    } while (choice < 1 || choice > 2);
    return choice;
}

char** generate_word() {
    // Dictionnaire de mots aléatoire
    const char* dictionnaire[] = {"nigot","pedoncule","elephant","sniper"};
    int size = sizeof(dictionnaire) / sizeof(dictionnaire[0]);

    srand(time(NULL));  // Initialisation de l'aléatoire
    const char* mot = dictionnaire[rand() % size];
    int word_length = strlen(mot);

    char** final_word = (char**)malloc(2 * sizeof(char*));
    if (final_word == NULL) {
        fprintf(stderr, "Erreur d'allocation de mémoire\n");
        exit(1);
    }

    final_word[0] = (char*)malloc((word_length + 1) * sizeof(char));
    if (final_word[0] == NULL) {
        fprintf(stderr, "Erreur d'allocation de mémoire\n");
        exit(1);
    }
    
    strcpy(final_word[0], mot);

    final_word[1] = (char*)malloc((word_length + 1) * sizeof(char));
    if (final_word[1] == NULL) {
        fprintf(stderr, "Erreur d'allocation de mémoire\n");
        exit(1);
    }
    memset(final_word[1], '_', word_length);
    final_word[0][word_length] = '\0';
    final_word[1][word_length] = '\0';
    return final_word;
}

char** user_word() {
    char mot[MAX_WORD_LENGTH];
    printf("Entrez un mot : ");
    scanf("%s", mot);
    int word_length = strlen(mot);

    char** final_word = (char**)malloc(2 * sizeof(char*));
    if (final_word == NULL) {
        fprintf(stderr, "Erreur d'allocation de mémoire\n");
        exit(1);
    }

    final_word[0] = (char*)malloc((word_length + 1) * sizeof(char));
    if (final_word[0] == NULL) {
        fprintf(stderr, "Erreur d'allocation de mémoire\n");
        exit(1);
    }

    strcpy(final_word[0], mot);

    final_word[1] = (char*)malloc((word_length + 1) * sizeof(char));
    if (final_word[1] == NULL) {
        fprintf(stderr, "Erreur d'allocation de mémoire\n");
        exit(1);
    }
    memset(final_word[1], '_', word_length);
    final_word[0][word_length] = '\0';
    final_word[1][word_length] = '\0';
    return final_word;
}