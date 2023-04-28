#include "main.h"

/**
 * print_bin - prints binary
 * @val: args
 * @Return: char printed
*/

int print_bin(va_list print)
{
    unsigned int n = va_arg(print, unsigned int);
    int i, j;
    unsigned int mask;
    char *str;

    if (n == 0)
    {
        _putchar('0');
        return (1);
    }

    j = 0;
    for (mask = 1; mask <= n; mask <<= 1)
    {
        j++;

    }
    str =malloc(j + 1);
    if (!str)
            return (-1);
    i = j - 1;
    while (n > 0)
    {
        str[i--] = (n & 1) ? '1' : '0';
        n >>= 1;
    }

    str[j] = '\0';

    i = 0;
    while (str[i])
    {
        _putchar(str[i]);
        i++;
    }
    free (str);
    return (j);


}