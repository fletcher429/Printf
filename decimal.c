#include "main.h"
/**
 * print_dec - prints decimal int
 * @val: argumnet
 * Return: number of char
 */

int print_dec(va_list val)
{
	int rem, n, i =0;
	n = va_arg(val, int);

	if  (n < 0)
	{
		_putchar('-');
		n = -n;
		i++;

	}
	if (n >= 10)
	{
		i += print_dec(val);
	}
	rem = n % 10;
	_putchar(rem + '0');
	i++;

	return (i);
}
