#include <stdio.h>
/**
 * main - Entry point
 * 	to print 1 to 100
 * 	but print Fizz for multiples of 3
 * 	and Buzz for multiples of 5
 * 	and FizzBuzz for both multiple of 3 and 5
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0 && i != 100)
			printf("Buzz ");
		else if (i % 5 == 0 && i == 100)
			printf("Buzz");
		else
			printf("%d", i);
	}
	putchar('\n');
	return (0);
}
