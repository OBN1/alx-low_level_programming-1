#include "main.h"
/**
 * _isupper - Shows if the letter is uppercase
 *
 * @c: This is the character to be printed
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
