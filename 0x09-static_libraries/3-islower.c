#include "main.h"

/**
 * _islower - checks if a character is lowercase or not
 * @c: character to be checked
 * Return: 0(success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
