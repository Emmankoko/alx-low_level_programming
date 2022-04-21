#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a linked list
 * @h: printer to the list_t list to print
 * Return: number of nodes to be printed
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while(h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		count++;
		h = h ->next;
	}

	return (count);
}
