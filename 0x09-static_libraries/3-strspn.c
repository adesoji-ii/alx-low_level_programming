#include "main.h"

/**
 * _strspn - A function to calculate the length of the initial segment
 * of a string consisting only characters from another string
 * @s: String to check
 * @accept: String containing characters to search for
 * Return: length of the initial segment of 's' containing only characters
 * from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
