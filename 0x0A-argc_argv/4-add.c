#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds two positive numbers
 * print 0 if no number is passed
 * @argc: number of argument passed
 * @argv: array of charcater arguments
 *
 * Return: 0 for success, 1 if error
 */
int main(int argc, char *argv[])
{
	int sum;
	int count;
	int i;

	count = 1;
	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (count < argc)
	{
		for (i = 0; argv[count][i] != '\0'; i++)
		{
			if (!(isdigit(argv[count][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[count]);
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
