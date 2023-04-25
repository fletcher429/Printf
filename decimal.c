#include "main.h"
/**
 * print_dec - prints decimal int
 * @val: argumnet
 * Return: number of char
 */

int print_dec(va_list val)
{
	int n = va_arg(val, int);
	int res, num = 0;

	if (n < 0)
	{
		_putchar('-');
		num++;
		n = -n;
	}
	if (n / 10)
	{
		num += print_dec(val);
	}
	res = n % 10 + '0';
	_putchar(res);

	return (num + 1);

}
