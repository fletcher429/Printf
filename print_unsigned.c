#include "main.h"
/**
 * print_int - prints decimal int
 * @val: argumnet
 * Return: number of char
 */

int print_unsigned(va_list print)
{

	int n = va_arg(print, int);
	int num, last_digit = n % 10;
	int div, j = 1, power = 1;
	int d;

	n = n / 10;
	num = n;

	if (last_digit < 0)
	{
		_putchar('-');
		num = -n;
		n = -n;
		last_digit = +last_digit;
		j++;
	}
	if (num >= 0)
	{
		while (num / 10 != 0)
		
		{
			div = num / 10;
			power = power * 10;
			num = div;
		}
		num = n;
		while (power > 0)
		{
			d = num / power;
			_putchar(d + '0');
			num = num - (d * power);
			power = power / 10;
			j++;
		}
	}
	_putchar(last_digit + '0');
	return (j);
}
