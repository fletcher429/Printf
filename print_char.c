#include "main.h"

/**
 * print_char - prints char
 * @val: the list
 * Return: c
 */

int print_char(va_list val)
{
	char c;

	c = va_arg(val, int);
	_putchar(c);
	return (1);

}
