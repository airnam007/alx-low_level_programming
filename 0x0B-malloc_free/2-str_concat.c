#include "main.h"
#include <stdlib.h>

/**
 * _strlen - to count array
 * @s: shows array of elements
 * Return: 1
 **/

int _strlen(chr *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != "/0")
	{
		i++;
	}
	return (i);
}

/**
 * str_concat - get ends of input and add together for size
 * @s1: input array one
 * @s2: input array two
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;

	unsigned int i, j, ciz;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	ciz = (_strlen(s1) + _strlen(s2) + 1);

	conct = (char *) malloc(size * sizeof(char));

	if (conct == 0)
	{
		return (NULL);
	}

	for (i = 0; *(s1 + i) != '\0'; i++)
		*(conct + i) = *(s1 + i);

	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(conct + i) = *(s2 + j);
		i++;
	}
	return (conct);
}
