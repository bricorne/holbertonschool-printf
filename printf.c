#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <ctype.h>

int _printf(const char *const format, ...)
{
	int i = 0, b = 0, len = 0;
	va_list args;
	operateurs ops[] = {
		{'s', print_string},
		{'c', print_char},
		{0, NULL}
	};
	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			b = 0;
			while (ops[b].op != '\0')
			{
				if (ops[b].op == format[i])
				{
					len += ops[b].func(args);
					break;
				}

				b++;
			}
			if ( !(isalpha(format[i])) && format[i] != '%')	
				return (-1);
			else if (ops[b].op == 0)
			{
				len += _putchar(format[i]);
			}
				}
		else
		{
			len += _putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (len);
}

