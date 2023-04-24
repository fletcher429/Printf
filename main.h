#ifndef MAIN_H
#define MAIN_H

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

int (const char *format, ...);



#endif
