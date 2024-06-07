#include <stdio.h>
#include "ascii/hangman_ascii.h"
#include <locale.h> // Inclure ce fichier d'en-tête pour définir LC_ALL

// Demande si mot aléatoire ou mot choisi

// Affichage du message + les barres du mot à trouver

// Demande de saisir d'une lettre + vérification de la lettre

// Si lettre trouvée, affichage de la lettre dans le mot
// Si lettre non trouvée, affichage du pendu

// Ajout de la lettre dans le tableau des lettres déjà jouées

// Vérification du pendu

// Vérification du mot
// Si mot trouvé, affichage du mot et message de victoire


int main() {
    setlocale(LC_ALL, ".utf8"); // Configure l'environnement pour utiliser l'encodage UTF-8
    // Tester les accents
    printf("éàèçù\n");
    int id = 0;
    while (id < 10) {
        print_hangman(id);
        id++;
    }

    return 0;
}
