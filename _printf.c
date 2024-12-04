#include "main.h"
#include <unistd.h>

/**
 * _printf -> produces output according to a format
 * @format: the starting point
 *
 * Return: Nothing
 */

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format)
		{

		}
		write(1, format, 1);
		format++;
	}
	return (0);
}
