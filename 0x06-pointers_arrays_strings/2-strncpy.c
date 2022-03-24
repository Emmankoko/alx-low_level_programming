#include "main.h"

/**
 * _strcpy - copies a string
 * description: copies up to n characters from the string pointed to by src
 * @dest: char
 * @src: char
 * @n: int
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		for (; i < n; i++)
			dest[i] = '\0';
	}
	return (dest);
}
