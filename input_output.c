#include <stdio.h>
int main()
{
    int row, column;
    scanf("%d %d", &row, &column);
    int a[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < row; i++)
    {
        // printf("%d\n", i);
        for (int j = 0; j < column; j++)
        {
            // printf("a[%d][%d] ", i, j);
            // Print all element of 2d array
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}