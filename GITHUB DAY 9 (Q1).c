//Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
int main()
{
    float a,b,c,D,root1,root2,real,imaginary;
    printf("Enter a,b,c");
    scanf("%f %f %f",&a,&b,&c);
    D= b*b - 4*a*c;
    if (D>0)
    {
    printf("Roots and real and distinct");
    }
    else if (D==0)
{
    printf("Roots are real and equal");
}
else if (D<0)
{
    printf("Roots are imaginary");
}
return 0;
}
