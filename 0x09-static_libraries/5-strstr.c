#include "main.h"

/**
 * _strstr - Locate a substring within a string
 * @haystack: String to search within
 * @needle: substring to search for
 * Return: Pointer to first occurrence of substring or Null if not found
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p  == '\0')
			return (haystack);
	}

	return (0);
}
