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
		{'%', print_percent},
		{0, NULL}
	};
	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			b = 0;
			while (ops[b].op != '\0')
			{
				if (ops[b].op == format[i + 1])
				{
					len += ops[b].func(args);
					i++;
					break;
				}
				b++;
			}
			if (format[i + 1] == '\0' || format[i + 1] == ' ')
				return (-1);
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

