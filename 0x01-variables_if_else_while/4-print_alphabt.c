#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */

/*more headers goes there */

/* betty style doc for functionmain goes there */
int main(void)
{
	char ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
			continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
