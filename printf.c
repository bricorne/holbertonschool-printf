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
<<<<<<< HEAD
			if (format[i+1] == 'r')
			{
				_putchar(format[i]);
			}
			else if (format[i+1] == 'c')
			{
				 c  = va_arg(args,int);
				print_char(c);
				len--;
				i++;
			}
			else if (format[i+1] == 's')
=======
			for (y = 0; ops[y].op; y++)
>>>>>>> af083fd3cb94a9be767fbdfed5cc820c18ff7fba
			{
				if (ops[y].op == format[x + 1])
				{
					len += ops[y].func(args);
					x++;
					break;
				}
			}
<<<<<<< HEAD
			else if (format[i+1] == '%')
			{
				putchar(format[i]);
				len--;
				i++;
			}
			else
=======
			if (!ops[y].op)
>>>>>>> af083fd3cb94a9be767fbdfed5cc820c18ff7fba
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

