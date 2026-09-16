//Q7: Write a program to swap two numbers without using a third variable.
#include <stdio.h>
int main()
{
    float num1,num2;
    printf("Enter the 1st number");
    scanf("%f",&num1);
    printf("Enter the 2nd number");
    scanf("%f",&num2);
    num1 = num1 + num2;
    num2=num1 - num2;
    num1=num1-num2;
    printf("After swapping 1st number is= %f\n",num1);
    printf("After swapping 2nd number is= %f\n",num2);
    return 0;
}

    