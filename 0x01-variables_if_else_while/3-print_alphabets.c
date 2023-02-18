#include <stdio.h>

/**
 * main - print alphabet lower case & upper case
 * Return: Always 0
 */
int main(void)
{
	char lo;

	for (lo = 'a'; lo <= 'z'; lo++)
	{
		putchar(lo);
	}
	for (lo = 'A'; lo <= 'Z'; lo++)
	{
		putchar(lo);
	}

	putchar('\n');

	return (0);
}
