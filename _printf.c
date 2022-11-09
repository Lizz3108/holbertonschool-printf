#include "main.h"
#include <stdio.h>
/**
 * _printf - functio that pritf formated output
 * @format: character string
 * Return: the number of character printed.
 */
int _printf(const char *format, ...)
{
	va_list a;
	int count = 0, i = 0;

	va_start(a, format);

	if (format == NULL)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case '%':
					write(1, "%", 1);
					count++;
					break;
				case 'c':
					count += print_char(va_arg(a, int));
					break;
				case 's':
					count += print_str(va_arg(a, char *));
					break;
				case 'd': case 'i':
					count += print_interger(va_arg(a, int));
					break;
				default:
					write(1, &format[i], 1);
			}
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}
	va_end(a);
	return (count);
}
