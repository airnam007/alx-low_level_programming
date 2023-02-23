#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 t0 9 except 2 and 4
 * Return: the numbers
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 50)
		{
			if (i != 52)
			{
				_putchar(i);
			}
		}
	}
	_putchar('\n');
}
