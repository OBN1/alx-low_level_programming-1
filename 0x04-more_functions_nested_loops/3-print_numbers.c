#include "main.h"
/**
 * print_numbers - print numbers
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int j;

	j = 0;
	while (j < 10)
	{
		_putchar(j + '0');
		j++;
	}
	_putchar ('\n');
}
