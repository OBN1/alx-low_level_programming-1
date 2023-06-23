#include <stdio.h>
/**
 * main - calculate largest prime of 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int x = 612852475143;
	long int prime;

	for (prime = 2; prime < x; prime++)
	{
		if (x % prime == 0)
		{
			x = x / prime;
		}
	}
	printf("%ld\n", prime);
	return (0);
}
