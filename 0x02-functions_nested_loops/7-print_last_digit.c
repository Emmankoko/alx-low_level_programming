#include "main.h"
/**
 * print_last_digit -  prints the last digit of a number
 *@n: an int value used as an argument for the function
 * Return: int value as last integer
 */
int  print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
		last = last * -1;

	_putchar(last + '0');

	return (last);
}
