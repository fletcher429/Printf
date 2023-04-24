#include "main.h"

/**
 * print_char - prints char
 * @c: character
 * Return: c
 */

int print_char(va_list val)
{

	char c = va_arg(val, int);
	_putchar(c);
	return (1);

}
