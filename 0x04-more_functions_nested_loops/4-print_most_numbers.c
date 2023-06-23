#include "main.h"
/**
 * print_most_numbers - print numbers 0-9 except 2 and 4
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int j;

	j = 0;
	while (j < 10)
	{
		if (j != 2 && j != 4)
		{
			_putchar (j + '0');
		}
		j++;
	}
}
