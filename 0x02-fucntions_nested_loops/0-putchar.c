#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char printitem[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i;

	for (i = 0; i < sizeof(printitem); i++)
	{
		_putchar(printitem[i]);
	}
	_putchar('\n');
	return (0);
}		
