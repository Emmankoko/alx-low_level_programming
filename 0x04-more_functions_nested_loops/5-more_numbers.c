#include "main.h"

/**
 * more_numbers - prints 10 times the number from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j <= 14; j++)
			_putchar(j + '0');
		_putchar('\n');

	}
	_putchar('\n');
}