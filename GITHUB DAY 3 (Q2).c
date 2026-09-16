//Q6: Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main()
{
    float num1, num2, variable;
    printf("The 1st number is ");
    scanf("%f",&num1);
    printf("The 2nd number is ");
    scanf("%f",&num2);
    variable=num1;
    num1=num2;
    num2=variable;
    printf("After swapping:\n");
    printf("1st Number is:%f\n",num1);
    printf("2nd Number is:%f:\n",num2);
    return 0;
}

