#include <stdio.h>
#include <ctype.h>

/**
 * main - displays alphabets with putchar in lowercase
 * Return: 0(success)
 */

int main(void)
{

	for (int aph = 'A'; aph <= 'Z'; aph++)
	{
		char small = tolower(aph);

		putchar(small);
	}
	return (0);
}
