#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - Check if a string contains only digits
 * @str: String to check
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */

int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*loop through the string*/

	{
		if (!isdigit(str[count])) /*check if there are non-digit char*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - Entry point of the program
 * @argc: Count of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*iterate through the whole array of arguments*/
	{
		if (check_num(argv[count])) /* Check if the argument is a valid integer */

		{
			str_to_int = atoi(argv[count]); /*convert the string to integer using atoi*/
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum); /*print the sum of valid integers*/

	return (0);
}
