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
int print_percent(__attribute__((unused)) va_list args)
{
	return (_putchar('%'));
}
/*
 * _strlen - a fonction that calcul the length of a string
 * @s: a string to print
 * return the length of a string
 */
int _strlen(const char *s)
{
	int i = 0;

	while(s[i])
	{
		i++;
	}
	return (i);
}

/*
 * _putchar - fonction that write a char
 * @c: a char to print
 * return: the char
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/*
 * print_string - fonction that print a string
 * @args - argument to print
 *
 */

int print_string(va_list args)
{
	int i;
	char *str = va_arg(args, char *);
	if (str == NULL)
	{
		str ="(null)";
	}
	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}

/*
 * print_char - fonction that print a char
 * @c: a char to print
 * return: the length (1)
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);
	_putchar(c);

	return(1);
}

/*
 *
 *
 *
 */

