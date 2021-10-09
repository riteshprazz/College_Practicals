//WAP  *Area of Cicle *Population of Nepal *Year of your Birth *Percentage Scored by student *Gender Male/Female *Euler's Number *Value of Pi 
// *Distance between two places *Factorial of a number
#include<stdio.h>
#include<math.h>
#define PI 3.142
int main(){
    const float eulers_number = 2.71828;
    const int population_of_nepal = 29795804;
    //Area of a Circle
    float radius, area;
    printf("Enter the radius: ");
    scanf("%f",&radius);
    area = PI*radius*radius;
    printf("Area of Circle: %.3f\n", area);
    //Population of Nepal
    printf("Population of Nepal: %d\n",population_of_nepal);
    //Year of Birth
    int year;
    printf("Enter the Year of Birth in AD: ");
    scanf("%d",&year);
    printf("The Year of Birth is %d AD\n",year);
    //Percentage Scored by Student
    float phy, chem, math, eng, c, total, percentage;
    printf("Enter the marks in 5 subjects: ");
    scanf("%f%f%f%f%f",&phy,&chem,&math,&eng,&c);
    total = (phy+chem+math+eng+c);
    percentage = (total/5);
    printf("Scored Percentage: %.2f%%\n",percentage);
    //Gender
    char gender;
    printf("Enter your Gender M/F/O : ");
    fflush(stdin);
    scanf("%c",&gender);
    /*switch(gender){
        case 'M':
        case 'm':
            printf("Gender: Male\n");
            break;
        case 'F':
        case 'f':
            printf("Gender: Female\n");
            break;
        case 'O':
        case 'o':
            printf("Gender: Others\n");
            break;
        default:
            printf("Invalid input\n");
    }*/
    if(gender == 'M' || 'm')
    {
        printf("Gender: Male\n");
    }
    else if(gender == 'F' || 'f')
    {
        printf("Gender: Female\n");
    }
    else{
        printf("Gender: Others\n");
    }
    //Eulers Number
    printf("Euler's Number: %.5f\n", eulers_number);
    //Value of PI
    printf("Value of PI: %.3f\n", PI);
    //Distance between two places
    float x1, x2, y1, y2, distance;
    printf("Enter the value of x1, x2, y1, y2: ");
    scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
    distance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    printf("Distance between two Points: %.2f\n", sqrt(distance));
    //Factorial of a number
    int factorial = 1, i, n;
    printf("Enter the number o find Factorial: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        factorial = factorial*i;
    }
    printf("Factorial of %d is %d\n",n, factorial );
    return 0;
}