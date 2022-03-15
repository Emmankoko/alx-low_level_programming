#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers to 98
 *
 * Return: Void
 */
void print_to_98(int n)
{
	if (n <= 98)
		while (n <= 98)
		{
			printf("%d", n);
			if (n == 98)
			{
				printf("\n");
				break;
			}
			printf(", ");
			n++;
		}
	else
		while ( n >= 98)
		{
			printf("%d", n);
			if (n == 98)
			{
				printf("\n");
				break;
			}
			printf(", ");
			n--;
		}
}
