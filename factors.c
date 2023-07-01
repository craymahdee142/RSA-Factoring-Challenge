#include "main.h"
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
