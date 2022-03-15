#include "main.h"
/**
 * _islower - checks for lowercase character
 *@c: an int used as an argument for the function
 * Return: 1 if c is lowercase and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
