#include <stdio.h>
int main() {
    // 🌟 Data Types
    int a = 10;             // Integer
    float b = 5.5;          // Floating point
    char c = 'A';           // Character
    double d = 3.14159;     // Double precision float
    _Bool e = 1;            // Boolean (C99 standard)

    // 📌 Displaying values
    printf("Integer a = %d\n", a);
    printf("Float b = %.2f\n", b);
    printf("Character c = %c\n", c);
    printf("Double d = %.5lf\n", d);
    printf("Boolean e = %d\n\n", e);

    // 🔧 Operators
    int x = 7, y = 3;

    // Arithmetic Operators
    printf("x + y = %d\n", x + y);
    printf("x - y = %d\n", x - y);
    printf("x * y = %d\n", x * y);
    printf("x / y = %d\n", x / y);     // Integer division
    printf("x %% y = %d\n\n", x % y);  // Modulus

    // Relational Operators
    printf("x == y: %d\n", x == y);
    printf("x != y: %d\n", x != y);
    printf("x > y: %d\n", x > y);
    printf("x < y: %d\n", x < y);
    printf("x >= y: %d\n", x >= y);
    printf("x <= y: %d\n\n", x <= y);

    // Logical Operators
    printf("(x > 5) && (y < 5): %d\n", (x > 5) && (y < 5));
    printf("(x < 5) || (y < 5): %d\n", (x < 5) || (y < 5));
    printf("!(x == y): %d\n", !(x == y));

    return 0;
}

