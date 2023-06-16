#include <stdio.h>

/**
 * main - Entry point to our program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char reverseLowerCase;

	for (reverseLowerCase = 122; reverseLowerCase >= 97; reverseLowerCase--)
	{
		putchar(reverseLowerCase);
	}

	putchar('\n');

	return (0);
}
