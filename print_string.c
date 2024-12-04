#include "main.h"

/**
 * print_string -> prints astring
 * @str: string to be printed
 *
 * Return: Number of character
 */

int print_string(char *str)
{
	int count = 0;

	if (!str)
		str = "(null)";
	while (*str)
	{
		count += write(1, str, 1);
		str++;
	}

	return (count);
}
