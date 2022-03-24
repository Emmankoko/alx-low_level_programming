#include "main.h"
/**
 * _strcmp compares two strings
 * @s1: char pointer
 * @s2: char pointer
 * Return: j-integer
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

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
