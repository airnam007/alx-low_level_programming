#include "main.h"
#include <stdio.h>

/**
 * _abs - checks for absolute value
 * @c: number to be checked
 * Return: 0(Success)
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		reuturn(abs_val);
	}
	return (c);
}
