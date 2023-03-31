#ifndef HEADER
#define HEADER
#include <stdarg.h>

typedef struct o
{
    char op;
    int (*func)(va_list);

} operateurs;

int _printf(const char *format, ...);
int print_string(va_list args);
int print_char(va_list args);
int print_percent(va_list args);
int _putchar(char c);
int _strlen(const char *s);

#endif
