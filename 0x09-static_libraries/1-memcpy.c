#include "main.h"

/**
 * _memcpy - a function to copy a memory area
 * @dest: destination memory address
 * @src: source memory address
 * @n: number of bytes to copy
 *
 * Return: pointer to destination memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
