#include <stdio.h>

// Character function
char checkVowel(char ch) {
    ch = tolower(ch); // Convert to lowercase
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        return 'Y'; // Yes, it's a vowel
    else
        return 'N'; // No, it's not
}

int main() {
    char input = 'E';
    if (checkVowel(input) == 'Y')
        printf("%c is a vowel\n", input);
    else
        printf("%c is not a vowel\n", input);
    return 0;
}
