#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Compares a random value with a constant value
 * Return: 0(Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
		printf("Last digit of %lu is %lu and is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("Last digit of %lu is %lu and is 0\n", n);
	}
	else if (n < 6 && n != 0)
	{
	printf("Last digit of %lu is %lu and is less than 6 and not 0\n", n);
	}
	return (0);
}
