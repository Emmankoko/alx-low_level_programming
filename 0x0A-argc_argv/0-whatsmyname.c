#include <stdio.h>
/**
 * main - prints the name of the file
 * @argc: Argument count
 * @argv: array of argument string
 *
 * Return: 0 for sucesful exit
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
