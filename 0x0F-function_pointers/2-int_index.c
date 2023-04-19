#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function that searches for an integer.
 * @array: arrayto search
 * @size: size of array
 * @cmp: the fuction we use to compare
 *
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; 1 < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
