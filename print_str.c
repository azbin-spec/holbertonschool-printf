#include "main.h"

/**
 * print_str - Fonction that prints string
 * @args: a list
 * Return: an integer
 */

int print_str(va_list args)
{
	int len = 0;

	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	while (*str)
	{
		_putchar(*str);
		str++;
		len++;
	}
	return (len);
}
