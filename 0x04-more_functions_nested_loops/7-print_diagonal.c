#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: an integer value passed as an argument to the function
 * Return: Void
 */

void print_diagonal(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		int j;

		for (j = 1; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
