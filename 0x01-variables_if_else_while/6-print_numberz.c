#include <stdio.h>
#include <stdlib.h>
/**
 * main - Display all base 10 numbers with putchar
 * Return: 0(Success)
 */

int main(void)
{
	int i;

	for (i = '0'; i < '10'; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
