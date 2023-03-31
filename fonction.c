#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

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
  * _putchar - fonction that write a char
  * @c: a char to print
  * Return: the char
  */

int	_putchar(char c)
{
	return (write(1, &c, 1));
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

