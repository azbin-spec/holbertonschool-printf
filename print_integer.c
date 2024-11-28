#include "main.h"

/**
 * print_integer - Function that prints integer
 * @num: The variable integer
 * Return: 0
 */

int print_integer(int num)
{	
	if (num >= 0)
	{
		_putchar(num);
	}
	Return 0
}

/**
 * print_negative - Function that prints a decimal number
 * @num: The variable integer
 * Return: 0
 */

int print_negative(int num)
{
	if (num < 0)
	{
		_putchar("-");
		num= -num;
	}
	Return 0
}
