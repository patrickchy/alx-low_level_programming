#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers of base 10, followed by a new line.
 *              Restrictions: Only use putchar function and call it only twice.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        putchar(i + '0');
    }

    putchar('\n');

    return (0);
}
