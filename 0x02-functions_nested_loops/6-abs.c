#include "main.h"
/**
 *  _abs - computes the absolute value of an integer
 *@n: an int value used as an argument for the function
 * Return:  integer value as the absolute of a number
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
		return (n * -1);
}
