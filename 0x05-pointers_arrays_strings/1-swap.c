#include "main.h"
/**
 * swap_int -  swap values of two integers
 * @*a: integer pointer
 * @*b: integer pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
