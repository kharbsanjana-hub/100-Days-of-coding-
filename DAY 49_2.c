//Q98: Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, last = 0;

    fgets(str, 100, stdin);

    str[strcspn(str, "\n")] = '\0';

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
            last = i;
    }

    printf("%c.", str[0]);

    for(i = 1; i < last; i++)
    {
        if(str[i] == ' ')
            printf("%c.", str[i + 1]);
    }

    printf(" %s", &str[last + 1]);

    return 0;
}