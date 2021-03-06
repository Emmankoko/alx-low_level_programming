#include "main.h"
/**
 **_strcpy - pointer function  that copies string pointed to by src
 *@dest: pointer to char
 *@src: pointer to char
 *Description: copy the string pointed to by 'src'  to buffer pointed to 'dest'
 *Return: char pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
