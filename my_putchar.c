#include <unistd.h>

/**
 * my_putchar -> prints a character
 * @n: character to be printed
 * Return: integer
 */
int my_putchar(char n)
{
	return (write(1, &n, 1));
}
