#include "main.h"
/**
 * factorize - function that factorise  numbers
 * @n: prime numbers
 */

void factorize(int n)
{
        int i;

        for (i = 2; i <= sqrt(n); i++)
        {
                if (n % i == 0)
                {
                        printf("%d = %d * %d\n", n, i, n / i);
                }
        }
}
