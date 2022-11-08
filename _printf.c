#include "main.h"
int _printf(const char *format, ...)
{
	va_list a;
	int count = 0, i = 0;

	va_start(a, format);
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
				case ' ': case '\0':
					return (-1);
					break;
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
