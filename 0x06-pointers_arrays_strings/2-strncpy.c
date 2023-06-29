#include "main.h"
/**
 * _strncpy - Copies a string from src to dest
 * @dest: The buffer that stores the string copy
 * @src: The source string
 * @n: The maximum number of bytes copied from the src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;
	int source_len = 0;

	while (src[index++])
		source_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = source_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
