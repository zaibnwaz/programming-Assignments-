#include <stdio.h>

int main() {
    char character;

    // Input character from user
    printf("Enter a character: ");
    scanf("%c", &character);

    // Check if it is a small alphabet
    if (character >= 'a' && character <= 'z') {
        printf("The entered character is a small alphabet.\n");
    }
    // Check if it is a capital alphabet
    else if (character >= 'A' && character <= 'Z') {
        printf("The entered character is a capital alphabet.\n");
    }
    // Check if it is a digit
    else if (character >= '0' && character <= '9') {
        printf("The entered character is a digit.\n");
    }
    // If it's not a small alphabet, capital alphabet, or digit, consider it a special character
    else {
        printf("The entered character is a special character.\n");
    }

    return 0;
}

