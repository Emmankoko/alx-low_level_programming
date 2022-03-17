#include "main.h"

/**
 * _isupper -  checks for uppercase characters
 * @c: used as an argument passed to the function
 * Return: an int return type value of 1 if c is uppercase and 0 if otherwise
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
