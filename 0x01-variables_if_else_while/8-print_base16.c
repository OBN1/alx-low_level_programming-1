#include <stdio.h>

/**
 * main - Entry point of our program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char base16;

	for (base16 = 48; base16 <= 57; base16++)
	{
		putchar(base16);
	}

	for (base16 = 97; base16 <= 102; base16++)
	{
		putchar(base16);
	}

	putchar ('\n');

	return (0);
}
