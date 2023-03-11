#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: character variable
 * Return: 1 (true) or 0(false)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
