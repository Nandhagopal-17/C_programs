#include <stdio.h>

int main() {
    int marks[5]; // Single-dimensional array

    // Input marks
    printf("Enter marks for 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Display marks
    printf("\nMarks entered:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }

    return 0;
}
