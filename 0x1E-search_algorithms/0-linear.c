#include "search_algos.h"

/**
 * main - Entry point
 * linear_search - function that the returns index at which value can be found
 * @value - the number being searched for
 * @size - size of the array
 * @array - array containing the elements to be searched for
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
    int i = 0;
    while(i < size && array[i] != value)
    {
        printf("value checked array [%d] = [%d]\n", i, array[i]);
        i++;
    }
    if(i == size)
    {
        return -1;
    }
    else
    {
        printf("value checked array [%d] = [%d]\n", i, array[i]);
        return i;
    }
}