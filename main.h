#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <unistd.h>


/**
 * struct format - struct to match conversion specififer with its function
 * @spec: the conversion specififer string
 * @f: pointer to the functionfor the conversion
 *
 */

typedef struct format
{
	char *spec;
	int (*f)();
} func_print;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list val);
int print_string(va_list val);
int _strlen(const char *c);
int print_percent(void);
int print_dec(va_list val);
int print_int(va_list val);
int print_bin(va_list print);

#endif
