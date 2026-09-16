//Write a program to calculate electricity bill based on units consumed with these rates: 
#include <stdio.h>
int main()
{
    int num,bill;
    printf("Number of units");
    scanf("%d",&num);
    if (num<=100)
    {
        bill=5*num;
        printf("Electricity bill:%d\n",bill);
    }
    else if ((num-100)<=100)
    {
        bill=500 + (num-100)*7;
        printf("Electricity bill:%d\n",bill);
    }
    else if ((num-200)<=100)
    {
        bill=500+ 700 +(num-200)*10;
        printf("Electricity bill:%d\n",bill);
    }
    else if(num>300)
    {
        bill=500+700+1000+(num-300)*12;
        printf("Electricity bill:%d\n",bill);
    }
    else
    {
        printf("Invalid Input");
    }
return 0;
}