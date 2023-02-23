#include "main.h"

/**
 * print_line - draws a straight line
 * @n: variable for number of times "_" will print out
 */

void print_line(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	}
		else
		{
			int i;

			for (i = 1; i <= n; i++)
			{
				_putchar('_');
			}
		_putchar('\n');
		}
}

