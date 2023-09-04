#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create an array of size 'size' and assign each element 'c'
 * @size: Size of the array to create
 * @c: character to assign to each element
 *
 * Return: Pointer to rhe created array, Null if fail
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
