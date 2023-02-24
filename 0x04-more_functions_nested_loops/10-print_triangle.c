#include "main.h"

/**
 * print_triangle - prints a triangle using #.
 * @size: The size of the triangle.
 */

void print_triangle(int size)
{
	int h, i, t;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= (size - 1); i++)
		{
			for (h = 0; h < (size - 1) - i; h++)
			{
				_putchar(' ');
			}
			for (t = 0; t <= i; t++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
