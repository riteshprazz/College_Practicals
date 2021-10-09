//WAP to input real number and display it rounded off to 3 decimal
#include<stdio.h>
int main(){
    float n;
    printf("Enter any real number: ");
    scanf("%f",&n);
    printf("Rounded Number: %.3f", n);
    return 0;
}