#include "main.h"

/**
 * _memset - a function that fills a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: desired value
 * @n: number of bytes to be changed
 *
 * Return: pointer tothe modified memory block
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
