#incude "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to char
 * Return: Void
 */
void rev_string(char *s)
{
	int i, len, half;
	char temp;

	for (len = 0; s[len] != '\0'; len++);

	i = 0;

	half = len / 2;

	while (half--)
	{
		temp = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = temp;
		i++;
	}
}
