//Q76: Check if a matrix is symmetric.
#include <stdio.h>

int main()
{
    int a[100][100];
    int rows, cols, i, j;
    int flag = 1;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the matrix elements:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    if(rows != cols)
    {
        flag = 0;
    }
    else
    {
        for(i = 0; i < rows; i++)
        {
            for(j = 0; j < cols; j++)
            {
                if(a[i][j] != a[j][i])
                {
                    flag = 0;
                    break;
                }
            }

            if(flag == 0)
            {
                break;
            }
        }
    }

    if(flag == 1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    return 0;
}