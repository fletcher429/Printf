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


	while (format[i] && format)
	{
		if (format[i] == '%')
		{
			int match_found = 0, j = 0;

			search_match_t matches[] = {
				{'i', print_int},
				{'d', print_int},
				{'c', print_char},
				{'p', print_pointer},
				{'b', print_bin},
				{'x', print_hex},
				{'X', print_HEX},
				{'o', print_octal},
				{'u', print_unsigned},
				{'s', print_str},
				{'f', print_float},
				{'%', print_prec},
				{NULL, NULL}
			};
			i++;
			while (matches[j].spec)
			{
				if (format[i] == *(matches[j].spec))
				{
					count += matches[j].f(print);
					match_found = 1;
					break;
				}
				j++;
			}
			if (!match_found)
			{
				_putchar('%');
				_putchar(format[i]);
				count += 2;
			}

		}
		else
		{
			_puthchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(print);
	return (count);
}
