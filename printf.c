#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <ctype.h>

int	_printf(const char *const format, ...)
{
	int	len;
	int	x;
	int	y;
	va_list	args;
	operateurs ops[] = {
		{'s', print_string},
		{'c', print_char},
		{'%', print_percent},
		{0, NULL}
	};
	len = 0;
	setbuf(stdout, NULL);
	va_start(args, format);
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
			if (!ops[y].op)
			{
				len += print_percent(args);
			}
			if (format[x + 1] == '\0' || format[x + 1] == ' ')
				return (-1);
		}
		else
		{
			len += _putchar(format[x]);
		}
	}
	va_end(args);
	return (len);
}

