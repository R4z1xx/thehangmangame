#include "../main.h"

// Define the hangman ASCII art
char *hangman_ascii[] = {
    "\n     \n     \n     \n     \n     \n     \n",
    "\n     \n     \n     \n     \n     \n     \n=====",
    "\n     \n    |\n    |\n    |\n    |\n    |\n=====",
    "\n +--+\n    |\n    |\n    |\n    |\n    |\n=====",
    "\n +--+\n |  |\n    |\n    |\n    |\n    |\n=====",
    "\n +--+\n |  |\n O  |\n    |\n    |\n    |\n=====",
    "\n +--+\n |  |\n O  |\n |  |\n    |\n    |\n=====",
    "\n +--+\n |  |\n O  |\n/|  |\n    |\n    |\n=====",
    "\n +--+\n |  |\n O  |\n/|\\ | \n    |\n    |\n=====",
    "\n +--+\n |  |\n O  |\n/|\\ | \n/   |\n    |\n=====",
    "\n +--+\n |  |\n O  |\n/|\\ | \n/ \\ |\n    |\n====="
};

int inverse_life(int life) {
    int inverse_map[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    if (life >= 0 && life <= 10) {
        return inverse_map[life];
    } else {
        return -1;
    }
}


// Function to print the hangman ASCII art
void print_hangman(int index) {
    system(CLEAR_SCREEN);
    if (index >= 0 && index < 11) {
        index = inverse_life(index);
        printf("%s\n", hangman_ascii[index]);
    } else {
        printf("Invalid index\n");
    }
}
