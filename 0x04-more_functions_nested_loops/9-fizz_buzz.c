#include <stdio.h>
/**
 * main - Print buzz for numbers divisible by 3 and fizz buzz for both 3 and 5
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b;

	for (b = 1; b <= 100; b++)
	{
		if ((b % 3 == 0) && (b % 5 == 0))
			printf("FizzBuzz");
		else if (b % 5 == 0)
			printf("Buzz");
		else if (b % 3 == 0)
			printf("Fizz");
		else
			printf("%i", b);
		if (b < 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
