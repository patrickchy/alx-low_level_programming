#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of two digits.
 * Numbers must be separated by ", " and in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, j, k;
    int comma = 0;

    for (i = 0; i <= 9; i++)
    {
        for (j = i + 1; j <= 9; j++)
        {
            for (k = j + 1; k <= 9; k++)
            {
                putchar(i + '0');
                putchar(j + '0');
                putchar(k + '0');

                if (i != 7 || j != 8 || k != 9)
                {
                    if (comma < 5)
                    {
                        putchar(',');
                        putchar(' ');
                        comma++;
                    }
                }
            }
        }
    }

    putchar('\n');

    return (0);
}
