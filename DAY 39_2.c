//Q78: Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main()
{
    int a[100][100];
    int rows, cols, i, j;
    int sum = 0;

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

    for(i = 0; i < rows; i++)
    {
        sum = sum + a[i][i];
    }

    printf("%d", sum);

    return 0;
}