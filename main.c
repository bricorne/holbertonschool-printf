#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    setbuf(stdout, 0);
    len = _printf("Let's try to printf a simple sentence.\n");
    printf("len du _printf %d\n", len);
    len2 = printf("Let's try to printf a simple sentence.\n");
    printf("len du printf %d\n", len2);
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    len = _printf("Character:[%c]\n", 'H');
    printf("Len:[%d]\n", len);
    len2 = printf("Character:[%c]\n", 'H');
    printf("Len:[%d]\n", len2);
    len = _printf("String:[%s]\n", "I am a string !");
    len2 = printf("String:[%s]\n", "I am a string !");
    printf("%d %d\n", len, len2);
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    printf("len du print :  %d\n", len);
    len2 = printf("Percent:[%%]\n");
    printf("len du print : %d\n", len2);

    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");

    len = _printf("Custom pourcent:[%]\n");
    len2 = printf("Custom pourcent:[%]\n");
    printf("%d %d\n", len, len2);

    len = _printf("%");
    printf("Len case %: %d\n", len);
    len2 = printf("%");
    printf("Len case %: %d\n", len2);

    len = _printf("% ");
    printf("Len case %: %d\n", len);
    len2 = printf("% ");
    printf("Len case %: %d\n", len2);
 
    return (0);
}

