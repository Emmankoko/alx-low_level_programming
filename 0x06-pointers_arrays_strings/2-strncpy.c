#include "main.h"

/**
 * *_strcpy - copies a string
 * @dest: char
 * @src: char
 * @n: int
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (dest[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
