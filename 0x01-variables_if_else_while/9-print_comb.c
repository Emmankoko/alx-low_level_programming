#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry
 *
 * Return: Always 0 (Successes)
 */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n % 10 + '0');
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
