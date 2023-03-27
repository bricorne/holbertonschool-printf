#include "main.h"
#include <stdarg.h>
#include <stdio.h>
int _printf(const char *format, ...)
{
	va_list args;
	int i;
	char c;
	const char* str;

	va_start(args, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i+1] == 'r')
			{
				_putchar(format[i]);

			}
			else if (format[i+1] == 'c')
			{
				 c  = va_arg(args,int);
				print_char(c);
				i++;
			}
			else if (format[i+1] == 's')
			{
				str = va_arg(args,const char*);
				print_string(str);
				i++;
			}
			else
			{
				_putchar(format[i]);
			}
		}
		else
		{
		_putchar(format[i]);
		}
	}
	va_end(args);
	return (0);
}

