#include "main.h"

/**
 * print_bin - prints binary
 * @val: args;
 * @Return: return printed char
*/

int print_bin(va_list print)
{
    unsigned int n, i, flag;
    n = va_arg(print, unsigned int);
    flag = 1 << ((sizeof(unsigned int) * 8) - 1);
    for (i = 0; i < sizeof(unsigned int) * 8; i++)
    {
        if (n & flag)
            _putchar('1');
        else
            _putchar('0');
        flag >>= 1;
    }
    return (i);

}
