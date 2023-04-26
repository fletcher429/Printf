#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * myprintf - writes local buff 1024 to STDOUT
 * @format: pointer strings
 * Return: written char
*/

void myprintf(const char* format, ...)
{
    char buffer[1024];
    va_list print;
    int length;

    va_start(print, format);

    length = vsnprintf(buffer, sizeof(buffer), format, print);

    va_end(print);

    write(STDOUT_FILENO, buffer, length);
}
