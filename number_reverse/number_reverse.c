#include <stdio.h>

int main() {
    int n, rev = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    while(n > 0) { rev = rev*10 + n%10; n /= 10; }  // Reverse digits
    printf("Reversed: %d", rev);
    return 0;
}