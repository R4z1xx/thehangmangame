#include "main.h"

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
    setlocale(LC_ALL, ".utf8");

    // int id = 0;

    int lives = 5;
    char last_guess = 'a';
    const char *word = "g o o d    l u _ k";

    // Call the function to print the game state
    print_game_state(lives, last_guess, word);

    // while (id < 10) {
    //     print_hangman(id);
    //     id++;
    // }

    return 0;
}
