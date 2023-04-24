#include "main.h"

/**
 * print_char - prints char
 * @c: character
 * Return: c
 */

int print_char(va_list print)
{
	char c;
	c = va_arg(print, int);
	_putchar(c);
	return (1);

}
