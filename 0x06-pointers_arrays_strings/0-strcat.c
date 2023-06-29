#include "main.h"
/**
 * _strcat - concatenates @src to @dest
 * @src: The source string to append to the @dest
 * @dest: The destination string to be concatenated upon
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int index = 0;
	int destination_len = 0;

	while (dest[index++])
		destination_len++;
	for (index = 0; src[index]; index++)
		dest[destination_len++] = src[index];
	return (dest);
}
