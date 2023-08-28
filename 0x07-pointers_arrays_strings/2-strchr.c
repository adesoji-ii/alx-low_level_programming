#include "main.h"

/**
 * _strchr - a function that finds the first occurrence of a character
 * in a string
 * @s: The string to search
 * @c: The character to find
 * Return: Pointer to the first occurrence of the character in the string,
 * or 0 if the character is not found
 */

char *_strchr(char *s, char c)
{
int i = 0;

for (; s[i] != '\0'; i++)
{
	if (s[i] == c)
		return (&s[i]);
}
return (0);
}
