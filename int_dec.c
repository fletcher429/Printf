#include "main.h"

/**
 * print_int - prints integer
 * @val: args
 * Return: number of char
 */
int print_dec(va_list print)
{
	int n = va_arg(print, int);
	int num, l = n % 10, d, power = 1;
	int i = 1;

	n = n / 10;
	num = n;
	if (l < 0)
	{
		_putchar('-');
		num = -num;
		n = - n;
		l = -l;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			power = power * 10;
			num = num / 10;
		}
		num = n;
		while (power > 0)
		{
			d = num / power;
			_putchar(d + '0');
			num = num - (d * power);
			power = power / 10;
			i++;
		}
	}
	_putchar(l + '0');

	return (i);

}
