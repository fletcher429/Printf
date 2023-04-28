#include "main.h"

/**
 * print_oct - prints octal
 * @val: arguments
 * Return: printed char
*/

int print_octal(va_list print)
{
    unsigned int num = va_arg(print, unsigned int);
    char bin[32];
    int i = 0, count = 0;
    if (num == 0)
    {
        _putchar('0');
        return (1);
    }
    while (num > 0)
    {
        bin[i] = (num % 2) + '0';
        num = num / 2;
        i++;
    }
    count = i;
    for (i = count - 1; i >= 0; i--)
    {
        _putchar(bin[i]);
    }
    return (count);

}
