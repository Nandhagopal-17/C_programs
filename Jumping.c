#include <stdio.h>

void checkNumbers() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            printf("Skipping number %d using continue\n", i);
            continue; // Skip the rest of the loop when i == 5
        }

        if (i == 8) {
            printf("Breaking loop at number %d using break\n", i);
            break; // Exit the loop when i == 8
        }

        printf("Current number: %d\n", i);
    }
}

int main() {
    printf("Starting the program...\n");

    checkNumbers(); // Function call

    printf("Returning from main using return\n");
    return 0; // End the program
}
