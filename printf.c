#include "main.h"
#include <stdarg.h>
#include <stdio.h>
int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);
	int i;

	for (i = 0; i != '\0'; i++)
	{
		if (format[i] == "%")
		{
			if (format[i+1] == "c")
			{
				print_char(args);
				i++;
				args++;
			}
			else if (format[i+1] == "s")
			{
				print_string(args);
				i++;
				args++;
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
}

