
#include <stdio.h>

int main() {
    char c, lv, uv;
   

    printf("Enter an alphabet: ");
    scanf("%c", &c);

    
    lv=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    uv=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');

    if (lv || uv)
        printf("%c is vowel.", c);
    else
        printf("%c is not vowel", c);

    return 0;
}