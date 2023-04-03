# include <stdio.h>
# include <conio.h>
# include <string.h>
int main(){
int a,b=0,c,d=0,i;
printf("enter number of terms in fibonacci series");
scanf("%d",&a);


for ( i = 0; i <= a; i++)
{
  b+=i;

}
printf("fibonacci series is %d",b);


return 0;
}