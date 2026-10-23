//Q43: Write a program to check if a number is a strong number.
#include <stdio.h>
int main()
{
    int n,q,fact=1,i,result=0,rem;
    printf("The number is:");
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        rem = q%10;
        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        result=result+fact;
        fact=1;
        q=q/10;
        
    }
    if (result==n)
    {
        printf("%d is a strong number",n);
    }
    else 
    {
        printf("%d is not a strong number",n);
    }
    return 0;
}