#include "main.h"
/**
 * print_triangle - print a triangle
 * @size: size of triangle
 *
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int c, d;

	if (size <= 0)
	{
		_putchar(10);
	}
	for (c = 0; c < size; c++)
	{
		for (d = 0; d < size; d++)
		{
			if (d < (size - (c + 1)))
			{
				_putchar(32);
			}
			else
			{
				_putchar(35);
			}
		}
		_putchar(10);
	}
}
