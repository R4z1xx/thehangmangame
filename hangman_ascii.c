#include <stdio.h>

// Define the hangman ASCII art
char *hangman_ascii[] = {
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
    if (index >= 0 && index < 7) {
        printf("%s\n", hangman_ascii[index]);
    } else {
        printf("Invalid index\n");
    }
}

int main() {
    // Test the function
    print_hangman(0);
    print_hangman(1);
    print_hangman(2);
    print_hangman(3);
    print_hangman(4);
    print_hangman(5);
    print_hangman(6);
    print_hangman(7);  // This will print "Invalid index"
    return 0;
}
