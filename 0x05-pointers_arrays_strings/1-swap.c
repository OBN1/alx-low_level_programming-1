#include "main.h"
/**
 * swap_int - Swaps two integers
 * @a: First integer to be entered
 * @b: Second integer to be entered
 *
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

