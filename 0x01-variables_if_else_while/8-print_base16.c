#include <stdio.h>

/**
 * main - print number in base 16
 * Return: always 0
 */
int main(void)
{
	int no;
	char lo;

	for (no = 0; no < 10; no++)
		putchar((no % 10) + '0');

	for (lo = 'a'; lo <= 'f'; lo++)
		putchar(lo);

	putchar('\n');

	return (0);
}
