//WAP that takes an ASCII Value from the standard input and the prints the prints the character corresponding to the ASCII Value
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a ASCII Value (0-255): ");
    scanf("%d",&num);
    printf("Character for an ASCII Value of %d is %c.", num, num);
    return 0;
}