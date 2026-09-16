//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main()
{
float num1,num2,sum,difference,product,quotient;
printf("Enter 1st number");
scanf("%f",&num1);
printf("Enter 2nd number");
scanf("%f",&num2);
sum = num1 + num2;
difference = num1 - num2;
product = num1 * num2;
quotient=num1 / num2;
printf("sum = %f\n",sum);
printf("difference = %f\n",difference);
printf("product = %f\n",product);
if (num2 != 0)
{
    quotient = num1/num2;
    printf("quotient=%f\n",quotient);
}
else 
{
printf("quotient = not defined\n");
}
return 0;
}


