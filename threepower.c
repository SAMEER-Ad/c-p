# include <stdio.h>

int main(){
float a=0,b=0,c=0,d=0;
printf("enter an intiger");
scanf("%f",&a);

b=a*a;
c=a*a*a;

printf("%f^1 is: %f\n",a,a);
printf("%f^2 is: %f\n",a,b);
printf("%f^3 is: %f\n",a,b);
return 0;
}