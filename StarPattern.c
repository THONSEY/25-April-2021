#include <stdio.h>
#include <conio.h>
int main()
{
    int rows, i, j;
    printf("Enter the number of rows to show number pattern: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= rows; j++)
        {
            if (j <= i)
                printf("*");
            else
                printf(" ");
        }
        for (j = rows; j >= 1; j--)
        {
            if (j <= i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
