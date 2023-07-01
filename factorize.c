#include "main.h"
/**
 * factorize - function that factorise  numbers
 * @n: prime numbers
 */

void factorize(char *buf)
{
        int i, n;

	n = atoi(buf);

        for (i = 2; i < n; i++)
        {
                if (n % i == 0)
                {
                        printf("%d=%d * %d\n", n, i, n / i);
                }
        }
}
