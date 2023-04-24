#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <unistd.h>


/**
 * struct func_print - structure to match conversion specififer with its function
 * @spec: the conversion specififer string
 * @f: pointer to the functionfor the conversion
 *
 */

typedef struct format
{
	char *spec;
	int (*f)(va_list);
}func_print;

int _printf(const char *format, ...);
int _putchar(char c);
int print_pointer(va_list print);
int print_int(va_list print);
int print_char(va_list print);
int print_bin(va_list print);
int print_hex(va_list print);
int print_HEX(va_list print);
int print_octal(va_list print);
int print_unsigned(va_list print);
int print_str(va_list print);
int print_float(va_list print);
int print_percent(va_list print);
int print_rot13(va_list print);
int print_exstring(va_list print);
int print_srev(va_list print);


#endif
