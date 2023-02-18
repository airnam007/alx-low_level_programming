#include <stdio.h>

/**
 * main - displays base 16 numbers in lowercase
 * Return: 0(Success)
 */

int main(void)
{
	int i;
	char abet;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (abet = 'a'; abet <= 'f'; abet++)
		putchar(abet);
	putchar('\n');

	return (0);
}
