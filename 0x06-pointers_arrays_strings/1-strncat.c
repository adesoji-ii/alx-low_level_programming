#include "main.h"

/**
 * _strncat - concatenate two strings using at most n bytes from src
 * @dest: destination string where the result will be stored
 * @src: source string that will be concatenated to dest
 * @n: maximum number of bytes to be copied from src
 *
 * Return: a pointer to the concatenated string (dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
