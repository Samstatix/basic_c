#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    while(n > 0) { sum += n%10; n /= 10; }  // Add last digit
    printf("Sum: %d", sum);
    return 0;
}