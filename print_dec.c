#include "main.h"

/**
 * print_decimal - print decimal values
 * @d: the argment
 * Return: the number to be printed
 */
int print_decimal(va_list d)
{
	int n = va-args(args, int);
	int number, a = n % 10;
	int b, x = 1;
	int i = 1;

	n = n/ 10;
	number = n;

	if (a < 0)
	{
		_putchar('-');
		number = -number;
		n = -n;
		a = -a;
		i++;
	}

	if (number > 0)
	{
		while (number / 10 != 0)
		{
			x = x * 10;
			number = number / 10;
		}

		number = n;
		while (x > 0)
		{
			b = number / x;
			_putchar(b + '0');
			number = number - (b * x);
			x = x / 10;
			i++
		}
	}
	
	_putchar(a + '0');
	return (i);
}
