//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>
int main()
{
    float principal,rate , time, simpleinterest,compoundinterest,amount;
printf("Enter principal,rate and time");
scanf("%f %f %f", &principal,&rate, &time );
simpleinterest = (principal*rate*time)/100;
amount= principal * pow((1+ rate/100), time);
compoundinterest=amount-principal;
printf("The simple interest is=%f\n",simpleinterest);
printf("The compound interest is=%f\n",compoundinterest);
    return 0;
}
