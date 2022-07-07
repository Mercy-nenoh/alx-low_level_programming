#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search in
 * @size: size of array
 * @cmp: pointer to compare values
 * Return: index of the first element for which the
 * cmp function does not return 0
 *
 * If no element matches, return -1
 * or size is negative
 */
int int_index(int *array, int size, int (*cmp)(int));
{
	int i;

	if (array && cmp)
	{
		for (j = 0; j < size; j++)
		{
			if (cmp(array[j]) != 0)
				return (j);
		}
	}
	return (-1);
}
