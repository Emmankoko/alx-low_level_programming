#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: pointer of char
 * Return: integer
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
