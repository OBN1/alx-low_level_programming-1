#include "main.h"
/**
 * more_numbers - prints 10 times number 0 to 14
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int b, y;

	for (y = 0; y <= 9; y++)
	{
	for (b = 0; b <= 14; b++)
	{
	if (b > 9)
	{
	_putchar(1 + '0');
	}
	_putchar(b % 10 + '0');
	}
	_putchar('\n');
	}
}
