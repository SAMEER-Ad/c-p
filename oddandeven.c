#include <stdio.h>

int main() {
    int a;
    printf("Enter an integer :");
    scanf("%d", &a);

    // Check if the number is even or odd
    if (a%2 == 0) {
        printf("%d is even\n", a);
    }
    else {
        printf("%d is odd\n", a);
    }
    return 0;
}