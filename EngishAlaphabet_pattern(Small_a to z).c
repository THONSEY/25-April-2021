#include <stdio.h>
void main()
{
    int i, j, rows, space;
    for (i = 1; i <= 26; i++)
    {
        for (space = 1; space <= 26 - i; space++)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf(" %c", j + 96);
        }
        printf("\n");
    }
    return 0;
}
