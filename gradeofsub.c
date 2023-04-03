# include <stdio.h>

int main(){
float a,b,c,d,e,t,f;
printf("enter marks of physics: ");
scanf("%f",&a);

printf("enter marks of chemistry: ");
scanf("%f",&b);

printf("enter marks of maths: ");
scanf("%f",&c);

printf("enter marks of english: ");
scanf("%f",&d);

printf("enter marks of nepali: ");
scanf("%f",&e);

   t = a+b+c+d+e;
   f = t/5;

   printf("final grade is: %f",f);


return 0;
}