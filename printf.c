#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <ctype.h>

int _printf(const char *const format, ...)
{
	int len;
	int x;
	int y;
	va_list args;
	operateurs ops[] = {
		{'s', print_string},
		{'c', print_char},
		{'%', print_percent},
		{0, NULL}};
	len = 0;
	va_start(args, format);

	if (format == NULL)
		return (-1);
	for (x = 0; format && format[x]; x++)
	{
		if (format[x] == '%')
		{
			for (y = 0; ops[y].op; y++)
			{
				if (ops[y].op == format[x + 1])
				{
					len += ops[y].func(args);
					x++;
					break;
				}
			}
			if (format[x - 1] != '%' &&
				format[x] == '%' && format[x + 1] == '\0')
				return (-1);
			if (ops[y].op == '\0')
				len += print_percent(args);
		}
		else
		{
			len += _putchar(format[x]);
		}
	}
	va_end(args);
	return (len);
}
