#include "main.h"
/**
 * _strcmp - Compares pinters to two strings
 * @s1: A pointer to the first string being compared
 * @s2: A pointer to the second string being compared
 *
 * Return: If s1 < s2, positive difference in the string being compared
 * If s1 == s2, then the string is equal
 * If s1 > s2, there is a positive difference between characters.
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
