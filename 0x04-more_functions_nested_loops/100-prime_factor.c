#include <stdio.h>
/**
 * main - prints the largest prime factor of the number
 * Return: Always 0
 */

int main(void)
{
	long prime = 612852475143, div = 2;

	while (div <= (prime / 2))
	{
		prime /= 2;
		continue;
	}
	for (div = 3; div <= (prime / 2); div += 2)
	{
		if ((prime % div) == 0)
		{
			prime /= div;
		}
	}
	printf("%ld\n", prime);
	return (0);
}
