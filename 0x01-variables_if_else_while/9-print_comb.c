#include <stdio.h>

/**
 * main - Display Single digits clearly
 * Return: 0(Success)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
		putchar(',');
		putchar(' ');
		}
	}

	return (0);
}
