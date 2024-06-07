#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define MAX_WORD_LENGTH 100

// Dictionnaire de mots aléatoire
const char* dictionnaire[] = {"Nigot","Pedoncule","Elephant","Sniper"};
int taille = sizeof(dictionnaire) / sizeof(dictionnaire[0]);

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

char* generate_word()() {
    srand(time(NULL));  // Initialisation de l'aléatoire
    const char* mot = dictionnaire[rand() % taille];

    // Allouer dynamiquement la mémoire pour le mot choisi
    char* final_word = (char*)malloc((strlen(mot) + 1) * sizeof(char));

    if (final_word == NULL) {
        fprintf(stderr, "Erreur d'allocation de mémoire\n");
        exit(1);
    }

    int word_length = strlen(mot);

    for (int i = 0; i < word_length; i++) {
        final_word[i] = mot[i];
    }
    
    final_word[word_length] = '\0'; // Ajouter le caractère de fin de chaîne
    strcpy(final_word, mot);
    return final_word;
}

char* user_word() {
    char mot[MAX_WORD_LENGTH];
    printf("Entrez un mot : ");
    scanf("%s", mot);
    int word_length = strlen(mot);

    // Allouer dynamiquement la mémoire pour le mot entré
    char* final_word = (char*)malloc((word_length + 1) * sizeof(char));
    if (final_word == NULL) {
        fprintf(stderr, "Erreur d'allocation de mémoire\n");
        exit(1);
    }
    strcpy(final_word, mot);
    // On met les lettres du mot dans un tableau
    for (int i = 0; i < word_length; i++) {
        final_word[i] = mot[i];
    }
    final_word[word_length] = '\0'; // Ajouter le caractère de fin de chaîne
    return final_word;
}