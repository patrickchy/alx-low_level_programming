#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the lowercase alphabet excluding 'q' and 'e',
 *              followed by a new line, using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter;

    /* Loop through the alphabet */
    for (letter = 'a'; letter <= 'z'; letter++)
    {
        /* Check if the letter is not 'q' or 'e' */
        if (letter != 'q' && letter != 'e')
        {
            /* Print the current letter */
            putchar(letter);
        }
    }

    /* Print a new line */
    putchar('\n');

    return (0);
}
