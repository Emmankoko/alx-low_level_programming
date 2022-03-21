#include <stdio.h>
/**
 * print_array - prints n elemments of an array of integers
 * @a: int type array pointer
 * @n: argument passed for number of elements to be printed
 *Description: Numbers should be seperated by space and comma
 *Numbers should be displayed in the same order they are in the array
 *Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
