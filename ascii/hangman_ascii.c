#include "../main.h"

char *hangman_ascii[] = {
    "\n    +--+\n    |  |\n    O  |\n   /|\\ | \n   / \\ |\n       |\n   =====",
    "\n    +--+\n    |  |\n    O  |\n   /|\\ | \n   /   |\n       |\n   =====",
    "\n    +--+\n    |  |\n    O  |\n   /|\\ | \n       |\n       |\n   =====",
    "\n    +--+\n    |  |\n    O  |\n   /|  |\n       |\n       |\n   =====",
    "\n    +--+\n    |  |\n    O  |\n    |  |\n       |\n       |\n   =====",
    "\n    +--+\n    |  |\n    O  |\n       |\n       |\n       |\n   =====",
    "\n    +--+\n    |  |\n       |\n       |\n       |\n       |\n   =====",
    "\n    +--+\n       |\n       |\n       |\n       |\n       |\n   =====",
    "\n        \n       |\n       |\n       |\n       |\n       |\n   =====",
    "\n        \n        \n        \n        \n        \n        \n   =====",
    "\n        \n        \n        \n        \n        \n        \n   "
};

void print_hangman(int index) {
    if (index >= 0 && index < 11) {
        printf("%s\n", hangman_ascii[index]);
    } else {
        printf("Invalid index\n");
    }
}
