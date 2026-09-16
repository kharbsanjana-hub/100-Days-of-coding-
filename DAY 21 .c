#include <stdio.h>

int main()
{
    int matrix[10][10];
    int rowSum[10];
    int rows, columns;
    int i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &columns);

    printf("Enter the elements of the matrix:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < rows; i++)
    {
        rowSum[i] = 0;

        for(j = 0; j < columns; j++)
        {
            rowSum[i] = rowSum[i] + matrix[i][j];
        }
    }

    printf("Sum of each row:\n");

    for(i = 0; i < rows; i++)
    {
        printf("%d\n", rowSum[i]);
    }

    return 0;
}