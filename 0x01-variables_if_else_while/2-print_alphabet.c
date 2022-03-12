#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */

/* more headers goes there */

/*betty style doc for function main goes there */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
