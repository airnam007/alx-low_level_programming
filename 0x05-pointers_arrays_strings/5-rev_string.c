#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int ctt = 0;
	int i;

	while (s[ctt] != '\0')
	ctt++;
	for (i = 0; i < ctt; i++)
	{
		ctt--;
		rev = s[i];
		s[i] = s[ctt];
		s[ctt] = rev;
	}
}
