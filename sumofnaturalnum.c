#include <stdio.h>

int main() {
    int n=0, s=0, i=1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    
    while (i<=n) {
        s += i;
        i++;
    }

    printf("The sum of natural numbers from 1 to %d is %d", n, s);

    return 0;
}
