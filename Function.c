#include <stdio.h>

// Numeric function
int square(int num) {
    return num * num;
}

int main() {
    int n = 5;
    printf("Square of %d is %d\n", n, square(n));
    return 0;
}
