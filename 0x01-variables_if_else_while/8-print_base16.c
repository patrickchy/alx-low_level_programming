#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all hexadecimal digits in lowercase
 *              followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);

	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
