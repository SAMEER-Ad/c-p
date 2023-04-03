# include <stdio.h>
# include <conio.h>
# include <string.h>
int main(){
int n, r;

    printf("Enter a number:\n ");
    scanf("%d", &n);

    printf("number in reverse order is : \n");

    while (n!=0)
    {
     r=n%10;
     printf("%d",r);
     n/=10;
    }
return 0;
}