#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>


/**
 * struct func_print - structure to match conversion specififer with its function
 * @spec: the conversion specififer string
 * @f: pointer to the functionfor the conversion
 *
 */

typedef struct func_print
{
	char *spec;
	int (*f)(va_list);
}func_print;

int _printf(const char *format, ...);
int _putchar(char *s);
int print_pointer(va_list print);


#endif
