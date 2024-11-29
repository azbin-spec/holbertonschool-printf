#include "main.h"

/**
 * _printf - Fonction that print string,
 * following conversion specifiers %c, %s, %%
 * @format: number of arguments
 * Return: len
 */

int _printf(const char *format, ...)
{
	int x, len = 0;
	va_list args;

	va_start(args, format);

	if (format == NULL || format[0] == '%' && format[1] == '\0')
	{
		return (-1);
	}
	if (format == '%' && format[1] == ' ' && format[2] == '\0')
	{
		return (-1);
	}
	for (x = 0; format[x] != '\0' ; x++)
	{
		if (format[x] == '%')
		{
			len += get_specifier(format[x + 1], args);
			x++;
		}
		else
		{
			_putchar(format[x]);
			len++;
		}
	}
	va_end(args);
	return (len);
}
