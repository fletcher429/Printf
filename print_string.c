#include "main.h"

/**
 * print_str - prints the string
 * @args: va_list contaning the string args
 * Return: number of characters printed
 */

int print_string(va_list print)
{
	char *str = va_arg(print, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";
	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}
