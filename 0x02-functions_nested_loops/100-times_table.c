#include "main.h"

/**
 * print_number - prints a number with appropriate formatting
 * @num: The number to be printed
 */

void print_number(int num)
{
	if (num < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(num + '0');
	}
	else if (num < 100)
	{
		_putchar(' ');
		_putchar(num / 10 + '0');
		_putchar(num % 10 + '0');
	}
	else
	{
		_putchar(num / 100 + '0');
		_putchar((num / 10) % 10 + '0');
		_putchar(num % 10 + '0');
	}
}

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */

void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				print_number(i * j);
			}
			_putchar('\n');
		}
	}
}
