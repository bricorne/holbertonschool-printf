#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
#include <math.h>

/**
 * print_percent - a function that help to print a percent
 * @args: va_arg, supposed to be a chart
 * Return: bytes of writen characters
 */

int	print_percent(va_list args)
{
	(void) args;
	return (_putchar('%'));
}

/**
 * print_string - fonction that print a string
 * @args: argument to print
 * Return: the len of the string
 */

int	print_string(va_list args)
{
	int	r;
	int	x;
	char	*s;

	r = 0;
	s = va_arg(args, char *);
	if (s == NULL)
		s = "(null)";
	for (x = 0; s[x]; x++)
		r += _putchar(s[x]);
	return (r);
}

/**
 * print_char - fonction that print a char
 * @args: a char to print
 * Return: the length (1)
 */

int	print_char(va_list args)
{
	int	r;
	char	v;

	v = va_arg(args, int);
	r = _putchar((char) v);
	return (r);
}

/**
 * print_number - a fonction who convert the args in a int
 * @args: a int/unsigned int we want to convert
 * Return: the len of what we want to print
 */

int	print_number(va_list args)
{
	int r = 0;
	unsigned int z;
	int num = va_arg(args, int);

	if (num < 0)
	{
		r += _putchar('-');
		z = -num;
	}
	else
	{
		z = num;
	}

	r += print_int(z);
	return (r);
}

/**
 * print_int - fonction that print a int/unsigned int
 * @z: a int/unsigned int we want to print
 * Return: the len of what we print
 */

int	print_int(unsigned int z)
{
	int r = 0;

	if (z / 10)
	{
		r += print_int(z / 10);
	}
	r += _putchar((z % 10) + '0');
	return (r);
}
