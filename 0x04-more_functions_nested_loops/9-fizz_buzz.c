#include <stdio.h>
/**
 * main - Print buzz for numbers divisible by 3 and fizz buzz for both 3 and 5
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k;

	for (k = 1; k <= 100; k++)
	{
		if ((k % 3 == 0) && (k % 5 == 0))
			printf("FizzBuzz");
		else if (k % 5 == 0)
			printf("Buzz");
		else if (k % 3 == 0)
			printf("Fizz");
		else
			printf("%i", k);
		if (k < 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
