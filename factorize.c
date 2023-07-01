#include "main.h"
/**
 * factorize - function that factorise  numbers
 * @n: prime numbers
 */

void factorize(int n)
{
	int i = 2, count;

	while (1)
	{
		if (n % i == 0)
		{
			count = n / i;

			printf("%d=%d*%d\n", n, count, i);
			break;
		}
		i++;
	}
}
