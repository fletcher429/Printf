#include "main.h"

/**
 * print_string - prints the string
 * @s: string
 * Return: success
 *
 */

int print_string(va_list val)
{
	char *s;
	int len = 0, i = 0;
	s = va_arg(val, char*);

	while (s[len])
		len++;
	while(i < len)
	{
		_putchar(s[i]);
		i++;
	}
	return len;


}
