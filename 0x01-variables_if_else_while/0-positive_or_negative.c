#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* betty style doc for function main goes there */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    printf("The number %d ", n);
    if (n > 0)
    {
        printf("is positive");
    }
    else if (n == 0)
    {
        printf("is zero");
    }
    else
    {
        printf("is negative");
    }
    
    printf("\n");
    
    return (0)
}
