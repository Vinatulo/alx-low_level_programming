#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @j: function parameter
 * Return: i
 */
int print_last_digit(int j)
{
	int i;

	i = j % 10;
	if (j < 0)
		j = -j;
	return (i);
}

