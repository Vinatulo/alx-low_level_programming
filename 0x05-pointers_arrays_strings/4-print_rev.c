#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @s: string to be printed in reverse
 * Return: nothing
 */
void print_rev(char *s)
{
	int count = 0;

	while (*s)
	{
		s++;
		count++;
	}
	while (count)
	{
		s--;
		_putchar(*s);
		count--;
	}
	_putchar('\n');
}
