#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    while(n != 0) { n /= 10; count++; }  // Remove last digit and count
    printf("Digits: %d", count);
    return 0;
}