#include <stdio.h>
#include "main.h"
#include <stdarg.h>
void print_string(const char *str)
{
	int i;

	for (i = 0;str[i]; i++)
	{
		_putchar(str[i]);
	}


}
