#include "main.h"
#include <stdio.h>
/**
 * _puts - prints the the stdout
 * @str: char type of string
 */
void _puts(char *str)
{
	int z;

	for (z = 0; str[z] != '\0'; z++)
	{
		_putchar(str[z]);
	}
	_putchar('/n');
}
