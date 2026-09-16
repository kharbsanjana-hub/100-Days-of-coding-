//Q29: Write a program to calculate the factorial of a number.
#include <stdio.h>

int main()
{
    int n, digit, reverse = 0;

    scanf("%d", &n);

    while(n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    printf("%d", reverse);

    return 0;
}