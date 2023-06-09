#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

/**
  * _putchar - fonction that write a char
  * @c: a char to print
  * Return: the char
  */

int	_putchar(char c)
{
	return (write(1, &c, 1));
}

/**
  * _printf - fonction that print anythings
  * @format: the format of the thing to print
  * ... - all the arguments to print
  * Return: the len of what the fonction print
  */

int _printf(const char *const format, ...)
{
	int len, x, y;
	va_list args;
	operateurs ops[] = {
		{'s', print_string},
		{'c', print_char},
		{'%', print_percent},
		{'i', print_number},
		{'d', print_number},
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
