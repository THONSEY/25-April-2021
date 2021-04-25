#include <stdio.h>
int main()
{
    int i, j, rows;
    printf("Enter number of rows: \n ");
    scanf("%d", &rows);
    for (i = rows; i >= 1; i--)
    {
        for (j = 1; j <= rows; j++)
        {
            printf(" %d", i);
        }
        printf("\n");
    }

    return 0;
}
