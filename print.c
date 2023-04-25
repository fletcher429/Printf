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

	func_print matches[] = {
		{"c", print_char}, {"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};
	va_start(print, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				_putchar('%');
				count++;
			}
			else
			{
				int j = 0;
				while (matches[j].spec)
				{
					if (*matches[j].spec == format[i])
					{
						count += matches[j].f(print);
						break;
					}
					j++;
				}
			}
		}
		else
		{
			_putchar(format[i]);
			count++;

		}
		i++;
	}
	va_end(print);
	return (count);

}
