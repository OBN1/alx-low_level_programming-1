#include <unistd.h>
/**
 * _putchar - writes the character c to the standard output
 * @c: This is the character to be printed
 *
 * Return: Always 1 on success
 * On error, return -1 and set the error appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
