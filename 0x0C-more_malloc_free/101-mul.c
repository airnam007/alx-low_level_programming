#include "main.h"

/**
 * main - multiplies two positive numbers
 * @argc: n arguements
 * @argv: args
 * Return: int
 */

int main(int argc, char *argv[])
{
	unsigned long mul;
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] > 57 || argv[a][b] < 48)
			{
			printf("Error\n");
			exit(98);
			}
		}
	}
	mul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mul);

	return (0);
}
