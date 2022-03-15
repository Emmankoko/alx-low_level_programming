#include "main.h"
/**
 * _isalpha - checks for alphabetic charactere
 *@c: an int value used as an argument for the function
 * Return: 1 if character and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
