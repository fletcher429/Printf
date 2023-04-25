#include "main.h"
/**
 * print_dec - prints decimal int
 * @val: argumnet
 * Return: number of char
 */

int print_dec(va_list val)
{
	int n;
	n = va_arg(val, int);
	return print_dec(n);

}

