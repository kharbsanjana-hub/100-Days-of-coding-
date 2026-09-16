//Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 1st number\n");
    scanf("%d",&a);
    printf("Enter 2nd number\n");
    scanf("%d",&b);
    printf("Enter 3rd number \n");
    scanf("%d",&c);
    if (a>=b && a>=c)
    {
        printf("%d is largest",a);
    }
    else if (b>=a && b>=c)
    {
        printf("%d  is largest",b);
    }
    else if (c>=a && c>=b)
    {
        printf("%d is largest",c);
    }
    return 0;
}