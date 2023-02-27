#include <stdio.h>
#include "main.h"
/**
 * _puts - function that prints a string, followed by a new line
 * @str: string to print
 * Return: non
 */
int _putchar(char c)
{
	return putchar(c);
}

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

