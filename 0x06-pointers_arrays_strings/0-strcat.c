#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string where the result will be stored
 * @src: source string that will be concatenated to dest
 *
 * Return: a pointer to the concatenated string (dest)
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
