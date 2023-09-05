#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenate command-line arguments into a single string
 * @ac: Number of command-line arguments
 * @av: Array of command-line argument strings
 *
 * Description: This function takes the number of command-line arguments (ac)
 * and an array of strings (av) representing the command-line arguments. It
 * concatenates these arguments into a single string, with each argument
 * separated by a newline character ('\n').
 *
 * Return: A pointer to the concatenated string, or NULL if memory
 * allocation fails
 */

char *argstostr(int ac, char **av)
{
	int i, n, r = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}

	l += ac;

	str = malloc(sizeof(char) * (l + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[r] = av[i][n];
			r++;
		}

		str[r] = '\n';
		r++;
	}

	str[r] = '\0';

	return (str);
}
