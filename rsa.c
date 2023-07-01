#include "main.h"
/**
 * main - Entry
 * @argc: argument count
 * @args: aryguments vactor
 * Return: 0 
 */

int main(int argc, char *args[])
{
	int n;
	char read_line[100];
	FILE *fd;
	
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <file>\n", args[0]);
		exit(EXIT_FAILURE);
	}

	fd  = fopen(args[1], "r");
	if (fd == NULL)
	{
		perror("Error: can't open file\n");
		exit(EXIT_FAILURE);
	}

	while (fgets(read_line, sizeof(read_line), fd))
	{
		n = atoi(read_line);
		if (n != 0)
		{
			factorize(n);
		}
	}
	fclose(fd);
	return (0);
}
