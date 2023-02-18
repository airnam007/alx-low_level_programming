#include <stdio.h>

/**
 * main - Display alphabets in both lowercase and uppercase
 * Return: 0 (success)
 */

int main(void)
{
	char aph;

	for (aph = 'a'; aph <= 'z'; aph++)
		putchar(aph);
	for (aph = 'A'; aph <= 'Z'; aph++)
		putchar(aph);
	putchar('\n');

	return (0);
}
