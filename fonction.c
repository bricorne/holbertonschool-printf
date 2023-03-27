#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
char *_strcpy(char *dest, char *src);
char *_strdup(char *str);
int _putchar(char c);
/**
 * *_strcpy - check holberton
 * @dest: have strings
 * @src:have strings
 * Return:void
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; ++i)
	{
	dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * _strdup - functiion
 * @str: input
 * Return: array
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *array;

	if (str == 0)
	{
		return (0);
	}
	for (i = 0; str[i]; i++)
		;

	array = malloc((i + 1) * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] ; i++)
	array[i] = str[i];
	array[i] = '\0';
	return (array);
}
int _putchar(char c)
{
        return (write(1, &c, 1));
}
