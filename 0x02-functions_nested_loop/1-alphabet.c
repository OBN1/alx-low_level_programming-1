#include "main.h"
/**
 * print_alphabet - Print the lowercase alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char lowerCase;

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		_putchar(lowerCase);
	}

	-putchar('\n');
}
