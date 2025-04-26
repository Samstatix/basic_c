#include <stdio.h>

int main() {
    double num;
    
    // Get user input
    printf("Enter a number: ");
    scanf("%lf", &num);
    
    // Check and display result
    if (num > 0) {
        printf("Positive\n");
    } else if (num < 0) {
        printf("Negative\n");
    } else {
        printf("Zero\n");
    }
    
    return 0;
}