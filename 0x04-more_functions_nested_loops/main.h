int _isupper(int c);

int _isdigit(int c);

int mul(int a, int b);

void print_numbers(void);

void print_most_numbers(void);

#include <unistd.h>

/**
 * _putchar - writes the chracter c to stdout
 * Return: 1
 */

int _putchar(char c)
{

        return (write(1, &c, 1));
}
