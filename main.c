#include <limits.h>
#include <stdio.h>
#include "main.h"

void check_length(int len, int len2, char *msg)
{
	printf("\n");
	if (len != len2)
	{
		printf("%d %d", len, len2);
		fflush(stdout);
		printf("-> %s Lengths differ.\n", msg);
		fflush(stdout);
		return (1);
	}
}

/*int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;

	len = _printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len, len);
	_printf("Negative:[%d]\n", INT_MIN);
	printf("Negative:[%d]\n", INT_MAX);
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

	len = _printf("Unknown:[%r]\n");
	len2 = printf("Unknown:[%r]\n");
	check_length(len, len2, "Test du pourcent [%r] \\ n");

	len = _printf("Custom pourcent:[%]\n");
	len2 = printf("Custom pourcent:[%]\n");
	check_length(len, len2, "Test du pourcent [%] \\ n");

	len = _printf("%2\n");
	len2 = printf("%2\n");
	check_length(len, len2, "Test du pourcent %2 \\ n");

	len = _printf("% \n");
	len2 = printf("% \n");
	check_length(len, len2, "Test du pourcent avec un espace");

	len = _printf("%\n");
	len2 = printf("%\n");
	check_length(len, len2, "Test du pourcent avec une new line");

	len = _printf("%");
	len2 = printf("%");
	check_length(len, len2, "Test du pourcent tout seul");

	len = _printf("%c", 'S');
	len2 = printf("%c", 'S');
	check_length(len, len2, "Test du char tout seul");

	len = _printf("%%");
	len2 = printf("%%");
	check_length(len, len2, "Test double pourcentage sans new line");

	len = _printf(NULL);
	len2 = printf(NULL);
	check_length(len, len2, "format est egal a NULL");

	len = _printf("%d\n", -1024);
	len2 = printf("%d\n", -1024);
	check_length(len, len2, "Check len NEGATIVE");
	
	len = _printf("%d\n", 1024);
	len2 = printf("%d\n", 1024);
	check_length(len, len2, "Check len POSITIF when is positive and negative");
	
	len = _printf("%d - %d = %d\n", 1024, 2048, -1024);
	len2 = printf("%d - %d = %d\n", 1024, 2048, -1024);
	check_length(len, len2, "Check len when is positive and negative");
	return (0);
}*/
int main(void)
{
	int len, len2;

	len = _printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	len2 = printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
