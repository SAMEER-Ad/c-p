# include <stdio.h>

int main(){
int i=0,a=0,b=0,c=0,j=0;
printf("einter a number");
scanf("%d",&a);
i=a;


for (a;a!=0;a/=10)
{
    b=a%10;
    c+=b*b*b;
    
}
printf("%d\n",c);


if (i==c)
{
    printf("%d is armstrong number",i);

}
else{
    printf("%d is not armstrong number",i);
}
return 0;
}