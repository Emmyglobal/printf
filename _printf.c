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
	int printed_chars = 0;
	va_list args;

	if (!format)
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format == '%' && (*(format + 1) != '\0'))
		{
			format++;
			if (*format == 'c')
				printed_chars += my_putchar(va_arg(args, int));
			else if (*format == 's')
				printed_chars += print_string(va_arg(args, char *));
			else if (*format == 'd' || *format == 'i')
				printed_chars += print_number(va_arg(args, int));
			else
				printed_chars += write(1, format, 1);
			format++;
		}
	}
	va_end(args);
	return (printed_chars);
}
