#include "main.h"
/**
 * _strcmp - compares two strings
 * description: returns 0 when strings are equal
 *		returns an int greater than 0 when dest greater than src
 *		returns less than 0 when src greater than dest
 * @s1: char pointer
 * @s2: char pointer
 * Return: j-integer
 */
int _strcmp(char *s1, char *s2)
{
	int i,  j;

	j = 0;
	i = 0;

	do {
		if (s1[i] != s2[i])
		{
			j = s1[i] - s2[i];
			break;
		}

		i++;

	} while (s1[i] && s2[i]);

	return (j);
}
