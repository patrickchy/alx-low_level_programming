#include <stdio.h>

int main(void)
{
        int i, j;
        
        for (i = 0; i <= 9; i++)
        {
                for (j = i + 1; j <= 9; j++)
                {
                        if (!(i == 0 && j == 1))
                        {
                                if (i != 0 || j != 1)
                                {
                                        putchar(',');
                                        putchar(' ');
                                }
                                putchar(i + '0');
                                putchar(j + '0');
                        }
                }
        }
        
        putchar('\n');
        
        return (0);
}
