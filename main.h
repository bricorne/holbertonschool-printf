#ifndef HEADER
#define HEADER
<<<<<<< HEAD
typedef struct operation
{
	char op;
	void (*fn)(va_list);
} operation_t;

int print_string(const char *str);
=======
#include <stdarg.h>

typedef struct o
{
    char op;
    int (*func)(va_list);

} operateurs;

>>>>>>> af083fd3cb94a9be767fbdfed5cc820c18ff7fba
int _printf(const char *format, ...);
int print_string(va_list args);
int print_char(va_list args);
int print_percent(va_list args);
int _putchar(char c);
int _strlen(const char *s);

#endif
