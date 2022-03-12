#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a' ; ch--)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
