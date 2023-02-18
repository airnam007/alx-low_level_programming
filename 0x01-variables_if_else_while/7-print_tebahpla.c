#include <stdio.h>

/**
 * main - Display alphabets in reverse order
 * Return: 0(Success)
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');

	return (0);
}
