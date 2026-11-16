//Q79: Perform diagonal traversal of a matrix.
#include <stdio.h>

int main()
{
    int a[100][100];
    int rows, cols, i, j, k;

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

    for(k = 0; k < rows + cols - 1; k++)
    {
        for(i = 0; i < rows; i++)
        {
            j = k - i;

            if(j >= 0 && j < cols)
            {
                printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}