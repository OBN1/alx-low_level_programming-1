#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Return: Always 0 if success
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
