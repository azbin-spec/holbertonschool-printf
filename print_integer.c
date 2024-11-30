#include "main.h"

/**
 * print_integer - Function that prints integer
 * @args: a list
 * Return: length
 */

int print_integer(va_list args)
{
	int power = 1;
	int result = 0;
	long int num = va_arg(args, int);
	long int div;

	if (num < 0)
	{
		result += 1;
		_putchar('-');
		num *= -1;
	}
	if (num < 10)
		return (result += _putchar(num + '0'));
	div = num;
	while (div > 9)
	{
		power *= 10;
		div /= 10;
	}
	while (power >= 1)
	{
		result += (_putchar(((num / power) % 10) + '0'));
		power /= 10;
	}
	return (result);
}
