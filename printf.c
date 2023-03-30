#include "main.h"
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *const format, ...)
{
    int i = 0;
    int b = 0;
    int len = 0;
    int j = 0;
    va_list args;

    operateurs ops[] = {
        {'s', print_string},
        {'c', print_char},
        {0, NULL}
    };

    va_start(args, format);
    while (format[i] != '\0')
    {
	    if (format[i] == '%')
	    {
		i++;
        	b = 0;
        while (ops[b].op != '\0')
        {
            if (ops[b].op == format[i])
            {
              len += ops[b].func(args);
	      j++;
	    }
            b++;
	    if (b == 2 && j == 0)
	    {
		    if (format[i] != '%')
		    {
		    _putchar(format[i-1]);
		    }
		    _putchar(format[i]);
	    }
	}
	    }
	    else
	    {
	_putchar(format[i]);
	    }
	i++;
    }
    va_end(args);
    len += i;
    /*printf("%d\n", len);*/
    return (len);
}






/*int _printf(const char *format, ...)
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
}*/

