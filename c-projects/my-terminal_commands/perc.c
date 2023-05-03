#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculates percentage
 * @argc: argument count
 * @argv: string of arguments
 * Return: nothing
 */

int main(int argc, char **argv)
{
	int perc = 0;

	if (argc != 3)
	{
		printf("Error!\n");
		return (0);
	}
	printf("%.2f\n", (atof(argv[1]) / atof(argv[2]) * 100));
	return (0);
}
