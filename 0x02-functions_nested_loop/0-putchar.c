#include "main.h"
/**
 * main - A program that prints _putchar
 *
 * return: Always 0 (Success)
 */
int main(void)
{
	int y;

	char string[8] = "_putchar";

	for (x = 0; x < 8; x++)
	{
		_putchar(string[x]);
	}

	_putchar ('\n');

	return (0);
}
