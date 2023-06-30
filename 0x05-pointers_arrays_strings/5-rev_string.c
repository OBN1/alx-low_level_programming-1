#include "main.h"
/**
 * rev_string - Reverse a string
 * @s: chat type of string
 */
void rev_string(char *s)
{
	int i, c, l;

	char h;

	for (i = 0; s[i] != '\0'; i++)
		;
	l = i;
	for (i--, c = 0; c < l / 2; i--, c++)
	{
		h = s[c];
		s[c] = s[i];
		s[i] = h;
	}
}
