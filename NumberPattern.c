#include <stdio.h>
#include <conio.h>
int main()
{
    int rows, x, y, k;
    printf("Enter the number of rows to show number pattern: ");
    scanf("%d", &rows);
    for (x = 1; x <= rows; x++)
    {
        for (y = 1; y <= rows; y++)
        {
            if (y <= x)
                printf("%d", y);
            else
                printf(" ");
        }
        for (y = rows; y >= 1; y--)
        {
            if (y <= x)
                printf("%d", y);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
