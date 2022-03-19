#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer value used as an argument for the function
 * Return: Void
 */
void print_number(int n)
{
	unsigned int x;

	x = n;
	if (n < 0)
	{
		_putchar(45);
		x = -n;
	}
	if (x / 10)
		print_numbers(x / 10);
	_putchar((x % 10) + '0');
}
