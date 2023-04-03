# include <stdio.h>

int main(){
    int a,b,c,d;
printf("enter num 1 :");
scanf("%d",&a);

printf("enter num 2 :");
scanf("%d",&b);

printf("enter num 3 :");
scanf("%d",&c);
if (a==b==c)
{
   printf("all numbers are equal");

}
else if (a>b && a>c)
{
    printf("%d is greater",a);
}
else if (b>a && b>c)
{
   printf("%d is greater",b);
}
else{
    printf("%d is greater",c);
}




return 0;
}