#include <stdio.h>
int main()
{
    int row, column;
    scanf("%d %d", &row, &column);
    int arr[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int flag = 1;
    if (row != column)
    {
        flag = 0;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (i == j)
            {
                continue;
            }
            if (arr[i][j] != 0)
            {
                flag = 0;
            }
        }
    }
    if (flag == 1)
    {
        printf("Primary Diagonal\n");
    }
    else
    {
        printf("Not Diagonal\n");
    }

    return 0;
}