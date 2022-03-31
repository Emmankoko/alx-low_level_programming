#include "main.h"
/**
 * factorial - compute the factorial of a number
 * @n: the number
 * Return: factorial number
 */
int factorial(int n)
{

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
