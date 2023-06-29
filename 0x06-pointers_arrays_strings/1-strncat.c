#include "main.h"
/**
 * _strncat - concatenates two strings at inputted number of bytes from src.
 * @dest: The string to be appended upon
 * @src: The string to append to the dest
 * @n: The number of bytes from src to be appended to dest
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, destination_len = 0;

	while (dest[index++])
		destination_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[destination_len++] = src[index];
	return (dest);
}

