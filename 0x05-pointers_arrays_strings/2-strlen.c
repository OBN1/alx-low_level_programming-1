#include "main.h"
#include <string.h>
/**
 * _strlen - The length of a string
 * @s: Pointer to the int that will be updated.
 *
 * Return: Void
 */
int _strlen(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
