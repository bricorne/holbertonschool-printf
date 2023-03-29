#ifndef HEADER
#define HEADER
typedef struct operation
{
	char op;
	void (*fn)(va_list);
} operation_t;

int print_string(const char *str);
int _printf(const char *format, ...);
char *_strdup(char *str);
int _putchar(char c);
int print_char(char c);
char *_strcpy(char *dest, char *src);
int _strlen(const char *s);
#endif
