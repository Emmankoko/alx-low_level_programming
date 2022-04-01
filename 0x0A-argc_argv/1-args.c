#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: number of argumets passed
 * @argv: character pointer to the argumeents
 *
 * Return: 0 if succesful
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)*argv;
}
