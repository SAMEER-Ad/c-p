# include <stdio.h>
# include <conio.h>
# include <string.h>
int main(){
int a,b=0,c,i;
printf("inter number to to print multiplication table :");
scanf("%d",&a);
printf(" multiplication table up to :");
scanf("%d",&b);
for ( i = 1; i <= b; i++)
{
    c=a*i;
    printf("%d*%d=%d\n",a,i,c);
}

return 0;
}