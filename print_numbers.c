#include <stdio.h>
#include "main.h"
#include <stdarg.h>
void _putchar(char a);
int print_number(const int n, ...)
{
	int i;
	va_list argc;

	va_start(argc,n);

	for (i = 0; i < n; i++)
	{
		_putchar(va_arg(argc,int));
	}
	va_end(argc);

	return (i);

}
void _putchar(char a)
{
	write(1,&a,1);
}
