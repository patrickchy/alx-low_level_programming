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
	int i, j;

	for (i = 0; i <= 9; i++)
		for (j = i + 1; j <= 9; j++)
			if (i * 10 + j != 1)
			{
				putchar(',');
				putchar(' ');
				putchar(i + '0');
				putchar(j + '0');
			}

	putchar('\n');

	return (0);
}
