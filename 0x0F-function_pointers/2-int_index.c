#include "function_pointers.h"

/**
 * int_index - return the index of an element if comparison is true, else -1
 * @array: array of integers
 * @size: number of elements in the array
 * @cmp: pointer to a function that takes an integer and returns an integer
 * Return: index of the first matching element, or -1 if no match is found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
