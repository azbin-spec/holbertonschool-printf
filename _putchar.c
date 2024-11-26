#include "main.h"

/**
 * _putchar - prints/writes character 
 * @character: The character to print 
 * Return 1, succes, -1 error 
 */

char _putchar(char character)
{
	return (write(1, &character, 1));
}		
