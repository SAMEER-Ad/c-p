# include <stdio.h>

int main(){
    int a=0,i=0,f=1,g=1;

printf("enter a number to find factorial : ");
scanf("%d",&a);

while (a>1)
{
    g*=a;
    a--;
}


printf("factorial of given number is %d ",g);

return 0;
}