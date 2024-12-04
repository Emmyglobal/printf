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
	char charact;
	char *str;
	int num;
	va_list args;

	va_start (args, format);
	while (*format) 
	{
		if (*format == '%' && (*(format + 1) == 'c' || *(format + 1) == 's'))
		{
			format++;
			if (*format == 'c')
			{
				charact = va_arg(args, int);
				write(1, &charact, 1);
			}
			else if (*format == 's')
			{
				str = va_arg(args, char *);
				while (*str != '\0')
				{
					write(1, str, 1);
					str++;
				}	
			}				
		}
		if (*format == '%' && (*(format + 1) == 'd' || *(format + 1) == 'i')){
			format++;
			print_number(va_arg(args, int));
		}
		else
			write(1, format, 1);
		format++;
	}
	va_end(args);
	return (0);
}
