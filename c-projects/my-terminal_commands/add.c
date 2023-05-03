#include <stdio.h>
#include <stdlib.h>

/**
 * main - add arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: nothing
 */

int main(int argc, char **argv)
{
	int i = 0;
	float sum = 0;

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%.2f\n", sum);
	return (0);
}
