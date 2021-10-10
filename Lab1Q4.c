//WAP that takes a character as input from standard form and then prints its ASCII Value
#include<stdio.h>
int main(){
    char value;
    printf("Enter the character to find ASCII Value: ");
    scanf("%c",&value);
    printf("The ASCII Value for %c character is %d.", value, value);
    return 0;
    }