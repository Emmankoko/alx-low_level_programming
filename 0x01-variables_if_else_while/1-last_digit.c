#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */
	printf("Last digit of %d", n);
	printf(" is %d", (n % 10));
	if ((n % 10) > 5)
		printf(" and is greater than 5\n");
	if ((n % 10) == 0)
		printf(" and is 0\n");
	else if ((n % 10) < 6)
		printf(" and is less than 6 and not 0\n");

	return (0);
}
