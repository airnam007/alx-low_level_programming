#include <stdio.h>

/**
 * main - Display all alphabets except e and q
 * Return: 0(success)
 */

int main(void)
{
	char aph;

	for (aph = 'a'; aph <= 'z'; aph++)
	{
		if (aph != 'e' && aph != 'q')
		putchar(aph);
	}
	putchar('\n');

	return (0);
}
