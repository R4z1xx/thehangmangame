#include <stdio.h>

// Define the hangman ASCII art
char *hangman_ascii[] = {
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

// Function to print the hangman ASCII art
void print_hangman(int index) {
    if (index >= 0 && index < 10) {
        printf("%s\n", hangman_ascii[index]);
    } else {
        printf("Invalid index\n");
    }
}

int main() {
    int id = 0;
    while (id < 10) {
        print_hangman(id);
        id++;
    }

    return 0;
}