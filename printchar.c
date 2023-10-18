#include "main.h"

/**
 * print_char - prints a character
 * @c: the character value
 * Return: always 1
 */
int print_char(va_list c)
{
	char x;

	x = va_arg(c, int);
	_putchar(x);
	return (1);
}
