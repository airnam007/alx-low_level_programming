#include "main.h"

/**
 * print_more_numbers - prints 10x (0 to 14)
 * Return: 0(success)
 */

void print_more_numbers(void)
{
	int i , j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				_putchar(j / 10 + '0');
				_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
