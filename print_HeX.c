#include "main.h"


/**
 * print_hex - prints hexadecimal
 * @print: argument list
 * Return: number of printed characters
 */
int print_hex(va_list print)
{
    unsigned int hex = va_arg(print, unsigned int);
    int i;
    int count = 0;
    char *str;
    int swap = 0;

    str = malloc(sizeof(char) *  100);
    if (!str)
    {
        return (-1);
    }
    for (i = 0; hex != 0; i++)
    {
        swap = hex % 16;

        if (swap < 10)
        {
            str[i] = swap + 48;
        }
        else
        {
            str[i] = swap + 87;
        }

        hex = hex / 16;
    }

    for (i = i - 1; i >= 0; i--)
    {
        _putchar(str[i]);
        count++;
    }

    free(str);
    return count;
}
