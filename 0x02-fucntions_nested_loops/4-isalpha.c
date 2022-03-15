#include "main.h"
/**
 * _isalpha - checks for alphabetic charactere
 *
 * Return: 1 if character and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
