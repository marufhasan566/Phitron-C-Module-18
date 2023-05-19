#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    int n;
    scanf("%d", &n);
    for (int i = 0; i < row; i++)
    {
        // printf("%d\n", i);
        for (int j = 0; j < col; j++)
        {
            // print a specific "row or column" by giving valid value of i or j inside the "if"

            // for row matrix
            if (i == n)
            {
                printf("%d ", a[n][j]);
            }

            // for column matrix
            if (j == n)
            {
                // printf("%d ", a[i][n]);
            }
        }
        printf("\n");
    }

    return 0;
}