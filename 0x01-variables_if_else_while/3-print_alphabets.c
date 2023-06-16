#include <stdio.h>

/**
 * main - Entry point of our program
 *
 * Return: Always 0 (if success)
 */
int main(void)
{
	char lowerCase;
	char upperCase;

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		putchar(lowerCase);
	}

	for (upperCase = 'A'; upperCase <= 'Z'; upperCase++)
	{
		putchar(upperCase);
	}

	putchar ('\n');

	return (0);
}

