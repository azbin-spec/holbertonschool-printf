#include "main.h"

/**
 * print_str - Fonction that print string,
 * following conversion specifiers %c, %s, %%
 * @format: number of arguments
 * Return: len
 */

int _printf(const char *format, ...)
{
	int x, len = 0;

	va_list args;
	va_start(args, format);

	if (format == NULL)
	{
		return (-1);
	}
	else
	{
		for (x = 0; format[x] != '\0' ; x++)
		{
			if (format[x] == '%' && format[x + 1] != '\0')
			{
				x++;

				if (format[x] == 'c')
				{
					print_char(va_arg(args, int));
					len++;
				}
				else if (format[x] == 's')
				{
					print_str(va_arg(args, char *));
					len++;
				}
				else if (format[x] == '%')
				{
					print_modulo();
					len++;

				}
				else
				{
					print_modulo();
					_putchar(format[x]);
						len++;
				}
			}
			else
			{
				_putchar(format[x]);
					len++;
			}
		}
	}
	va_end(args);
	return (len);
}
