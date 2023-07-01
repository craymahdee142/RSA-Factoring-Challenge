#include "main.h"
/**
 * factorize - function that factorise  numbers
 * @n: prime numbers
 */
void factorize(int n)
{
	int p = 1, q, count;
	int i = 2;

	while (p == 1)
	{
		q = n % i;
		if (q == 0)
		{
			count = n / i;
			printf("%d=%d*%d\n", n, count, i);
			p = 0;
		}
		i++;
	}
}

/**
 * main - Entry
 * @argc: argument count
 * @args: aryguments vactor
 * Return: 0
 */

int main(int argc, char *args[])
{
	char *buf = NULL;
	size_t count = 0;
	ssize_t read_line;
	FILE *fd;
	int n = 0;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: factors <file>\n");
		exit(EXIT_FAILURE);
	}
	fd = fopen(args[1], "r");

	if (fd == NULL)
	{
		fprintf(stderr, "Error can't open file %s\n", args[1]);
		exit(EXIT_FAILURE);
	}
	read_line = getline(&buf, &count, fd);

	while (read_line != -1)
	{
		n = atoi(buf);
		factorize(n);

		read_line = getline(&buf, &count, fd);
	}
	free(buf);
	fclose(fd);
	return (0);
}
