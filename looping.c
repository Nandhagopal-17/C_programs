#include <stdio.h>

int main() {
    int i;

    // 🔁 for loop: Print numbers from 1 to 5
    printf("Using for loop:\n");
    for (i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // 🔁 while loop: Print numbers from 5 to 1
    printf("Using while loop:\n");
    i = 5;
    while (i >= 1) {
        printf("%d ", i);
        i--;
    }
    printf("\n");

    // 🔁 do-while loop: Print numbers from 1 to 5
    printf("Using do-while loop:\n");
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);
    printf("\n");

    return 0;
}
