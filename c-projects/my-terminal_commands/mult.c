#include <stdio.h>
#include <stdlib.h>

/**
 * main - find product
 * @argc: argument count
 * @argv: argument vector
 * Return: nothing
 */

int main(int argc, char **argv)
{
	int i = 0, mul = 0;

	if (argc != 3)
	{
		printf("Error!\n");
		return (0);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
