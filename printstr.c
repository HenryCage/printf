#include "main.h"

/**
 * print_str - print a series of string
 * @h: the argument passed to the function
 * Return: the string length
 */
int print_str(va_list h)
{
	char *str;
	int i;
	int length;

	str = va_arg(h, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);

		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
	else
	{
		length = _strlen(str);

		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
}
