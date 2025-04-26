#include <stdio.h>
#include <ctype.h>  // For tolower()

int main() {
    char c;
    printf("Enter uppercase: ");
    scanf(" %c", &c);
    printf("Lowercase: %c\n", tolower(c));  // Using library function
    return 0;
}