#include "main.h"
/**
 * print_line - Draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 */
void print_line(int n)
{
	int v;

	for (v = 0; v < n; v++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
