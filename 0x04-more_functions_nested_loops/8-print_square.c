#include "main.h"

/**
 * print_square - prints a square followed by a new line
 * @size: an integer value used as an argument passed to the function
 *
 * Return: Void
 */

void print_square(int size);
{
	int i;

	for (i = 0; i < size; i++)
	{
		int j;

		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
