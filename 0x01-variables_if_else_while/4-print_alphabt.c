#include <stdio.h>
/**
 * main - Print alphabets in lowercase
 * Return: 0 (Success)
 */

int main(void)
{
	char c;

	c = 'a';
	while
		(c <= 'z') {
			if ((c != 'q' && c != 'e') && c <='z')
				putchar(c);
			c++;
		}
	putchar('\n');
	return(0);
}
