#include <stdio.h>
/**
 * main - prints all combination of single digits
 * Return: Always 0
 */
int main(void)
{
	int m;

	for (m = 0; m < 10; m++)
	{
		putchar(m);
		if (m != 9)
		{
			putchar('.');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
