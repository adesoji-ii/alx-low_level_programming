#include "main.h"

/**
 * _strpbrk - Search a string for any of a  set of  characters
 * @s: String to search
 * @accept: string containing characters to search for
 * Return: Pointer to the fist occurrence of a character from 'accept' is "s",
 * or NULL if no suchcharacter is found
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}

	return ('\0');
}
