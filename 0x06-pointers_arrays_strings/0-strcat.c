#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to a char
 * @src: pointer to a char
 * description: appends the contents of src  to dest and returns the dest
 * Return: char array dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while ( dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
