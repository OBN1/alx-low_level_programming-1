#include "main.h"
/**
 * reverse_array - Reverses the content of an array of type integer
 * @a: The array of integers to be reversed
 * @n: The number of elments in the array
 */
void reverse_array(int *a, int n)
{
	int temp;
	int index;

	for (index = n - 1; index >= n / 2; index--)
	{
		temp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = temp;
	}
}
