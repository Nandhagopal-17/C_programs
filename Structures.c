#include <stdio.h>

// Define a structure
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student s1 = {101, "Nandhagopal", 95.5};

    // Pointer to structure
    struct Student *ptr;
    ptr = &s1;

    // Accessing structure members using pointer
    printf("Student Details:\n");
    printf("Roll No: %d\n", ptr->rollNo);
    printf("Name   : %s\n", ptr->name);
    printf("Marks  : %.2f\n", ptr->marks);

    return 0;
}
