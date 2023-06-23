#include "main.h"
/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: The number of times the charcter should be printed
 *
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int y;
	int z;

	for (y = 0; y < n; y++)
	{
		for (z = 0; z < y; z++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (y < (n - 1))
		_putchar('\n');
	}
	_putchar('\n');
}
