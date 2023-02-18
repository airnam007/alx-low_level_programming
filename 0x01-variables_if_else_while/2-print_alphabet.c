#include <stdio.h>

/**
 * main - displays alphabets with putchar in lowercase
 * Return: 0(success)
 */

int main(void)
{

	for (char aph = 'a'; aph <= 'z'; aph++)
	{
		putchar(aph);
		putchar('\n');
	}

	return (0);
}
