#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * of integers.
 * @a: array.
 * @n: number of elements of the array.
 * Return: no return.
 */

void reverse_array(int *a, int n);
{
	int y, x, temp;

	for (y = 0; y < n - 1; y++)
	{
		for (x = y + 1; x > 0; x--)
		{
			temp = *(a + y);
			*(a + x) = *(a + (x - 1));
			*(a + (x - 1)) = temp;
		}
	}
}
