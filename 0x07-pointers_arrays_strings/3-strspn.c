#include "main.h"

/**
 * _strspn- gets  the length of a prefix substring
 * @s: string to be searched
 * @accept: bytes to be accepted
 * Return: number to bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, found;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			found = 0;
			if (*s == accept[i])
			{
				count++;
				found  = 1;
				break;
			}
		}
			if (!found)
				break;
		s++;
	}
	return (count);
}
