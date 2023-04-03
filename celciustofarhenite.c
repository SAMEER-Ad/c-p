# include <stdio.h>

int main(){
    float c,f,t;
printf("enter temperature into celsius:\n");
scanf("%f",&c);
f=c*9/5+32;
printf("%fdegree celsius isequal to %fdegree Fahrenheit",c,f);

return 0;
}