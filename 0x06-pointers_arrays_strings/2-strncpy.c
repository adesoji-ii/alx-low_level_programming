#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: destination where the string will be stored
 * @src: source string thet will be copied to dest
 * @n: max number of characters to be copied from src
 *
 * Return: a pointer to the destination string (dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
