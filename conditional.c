#include <stdio.h>

int main() {
    int number;

    // 🌟 Input from user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // 🔍 if statement
    if (number > 0) {
        printf("The number is positive.\n");
    }

    // 🔍 if-else statement
    if (number % 2 == 0) {
        printf("It is even.\n");
    } else {
        printf("It is odd.\n");
    }

    // 🔍 if-else if ladder
    if (number > 100) {
        printf("Greater than 100.\n");
    } else if (number == 100) {
        printf("Exactly 100.\n");
    } else {
        printf("Less than 100.\n");
    }

    // 🔁 switch statement
    switch (number) {
        case 0:
            printf("You entered zero.\n");
            break;
        case 1:
            printf("You entered one.\n");
            break;
        case 2:
            printf("You entered two.\n");
            break;
        default:
            printf("You entered something else.\n");
    }

    return 0;
}
