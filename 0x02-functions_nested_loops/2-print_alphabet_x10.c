#include "main.h"

/**
 * print_alphabet_x10 - displays the alphabets 10x
 * Return: 0(Success)
 */

void print_alphabet_x10(void)
{
	char i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
	_putchar('\n');
	}

}
