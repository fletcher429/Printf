#include "main.h"

/**
 * print_str - prints the string
 * @args: va_list contaning the string args
 * Return: number of characters printed
 */

int print_str(va_list printf)
{
	char *str = va_arg(printf, char *);
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
