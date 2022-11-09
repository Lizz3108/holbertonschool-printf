#include "main.h"
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

	if (a == NULL || format == NULL)
	{
		return (-1);
	}
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			while (format[++i] == ' ')
			{
			}
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
