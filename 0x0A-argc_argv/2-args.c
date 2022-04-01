#include <stdio.h>
/**
 * main - prints all arguments received
 * @argc: number of arguments passed
 * @argv: pointer to a char for all arguments
 *
 * Return: 0 if succesful
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
