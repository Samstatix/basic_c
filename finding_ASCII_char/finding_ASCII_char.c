#include <stdio.h>

int main() {
    char c;
    printf("Enter character: ");
    scanf("%c", &c);
    printf("ASCII of '%c' is %d", c, c);  // Print character and its ASCII value
    return 0;
}