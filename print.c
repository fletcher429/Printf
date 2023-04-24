#include "main.h"
/**
 * _printf - prints the formatted string to the STDIO
 * @format: string contaning format to be printed
 * Return: number characters printed
 */
int _printf(const char *format, ...)
{
	va_list print;
	int i = 0, count = 0;

	va_start(print, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			int match = 0, j = 0;
			func_print matches[] = {
				{"c", print_char},
				{"s", print_string},
				{NULL, NULL}
			};
			i++;
			while (matches[j].spec)
			{
				if (format[i] == *(matches[j].spec))
				{
					count += matches[j].f(print);
					match = 1;
					break;
				}
				j++;
			}
			if (!match)
			{
				_putchar('%');
				_putchar(format[i]);
				count += 2;
			}
		}
		else
		{	_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(print);
	return (count);
}
