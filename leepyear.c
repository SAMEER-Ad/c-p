
/*
leap year
The year must be evenly divisible by 4;
If the year can also be evenly divided by 100, it is not a leap year;
The year is also evenly divisible by 400. Then it is a leap year;
According to these rules, the years 2000 and 2400 are leap years,
while 1800, 1900, 2100, 2200, 2300, and 2500 are not leap years.

*/
# include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter a year: ");
    scanf("%d", &a);

    if(a%4==0 ||a%400==0 && a%100!=0){
        printf("%d is a leap year",a);

    }
    else{
       printf("%d is not a leap year",a); 
    }
return 0;
}