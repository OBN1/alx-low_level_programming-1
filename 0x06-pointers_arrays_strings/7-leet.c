#include "main.h"
/**
 * leet - function that encodes a string into 1337
 *
 * @str: character to be checked
 * Return: if separator return 1. Ohterwise return a 0;
 */
char *leet(char *str)
{
	int count = 0;
	int x = 0;
	char *letter = "aeotlAEOTL";
	char *nums = "4307143071";

	while (str[count] != '\0')
	{
		x = 0;
		while (letter[x] != '\0')
		{
			if (str[count] == letter[x])
				str[count] = nums[x];
			x++;
		}
		count++;
	}
	return (str);
}
