#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

/*
 * print_percent - a function that help to print a percent
 * @args: va_arg, supposed to be a chart
 * return: bytes of writen characters
 */
int	print_percent(va_list args)
{
	(void) args;
	return (_putchar('%'));
}

/*
 * _strlen - a fonction that calcul the length of a string
 * @s: a string to print
 * return the length of a string
 */
int	_strlen(const char *s)
{
	int	x;

	for (x = 0; s[x]; x++)
		;
	return (x);
}

/*
 * _putchar - fonction that write a char
 * @c: a char to print
 * return: the char
 */

int	_putchar(char c)
{
	return (write(1, &c, 1));
}

/*
 * print_string - fonction that print a string
 * @args - argument to print
 *
 */

int	print_string(va_list args)
{
	int	r;
	int	x;
	char	*s;

	r = 0;
	s = va_arg(args, char *);
	if (s == NULL)
		s ="(null)";
	for (x = 0; s[x]; x++)
		r += _putchar(s[x]);
	return (r);
}

/*
 * print_char - fonction that print a char
 * @c: a char to print
 * return: the length (1)
 */

int	print_char(va_list args)
{
	int	r;
	char	v;

	v = va_arg(args, int);
	r = _putchar(v);
	return(r);
}

/*
 *
 *
 *
 */

