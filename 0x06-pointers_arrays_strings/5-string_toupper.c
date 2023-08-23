#include "main.h"

/**
 * string_toupper - a function that changes lowercase letters to uppercase
 * @n: pointer to the input string
 *
 * Return: a pointer to tje modified string (n)
 */

char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
