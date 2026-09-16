//Q23: Write a program to calculate library fine based on late days as follows: 
#include <stdio.h>
int main()
{
    int num,f;
    printf("Enter number of days");
    scanf("%d",&num);
    if (num<=5)
    {
        f=num*2;
        printf("Fine:%d\n",f);
    }
    else if(num>5 && num<=10)
    {
       f=10 + (num-5)*4;
        printf("fine:%d\n",f);
    }
    else if(num>10 && num<=30)
    {
        f= 30 + (num-10)*6;
        printf("fine:%d\n",f);
    }
    else if(num>30)
    {
        printf("membership cancelled\n");
    }
    else
    {
        printf("no fine");
    }    
return 0;
}