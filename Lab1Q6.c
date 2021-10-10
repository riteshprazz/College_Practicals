//WAP that takes user's date of birth in format YYYY-MM-DD from the user and then displays the year, month and day separately in format: 
//You were born in YYYY year  month DD day
#include<stdio.h>
int main(){
    int year, month, day;
    printf("Enter date of birth in format (YYYY-MM-DD): ");
    scanf("%d-%d-%d",&year,&month,&day);
    printf("You were born in %d year %d month %d day.",year, month, day);
    return 0;
}