#include "main.h"
/**
 * _isdigit - Checks if a digit
 * @c: integer to be printed
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
