#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - a function on each element of an array
 * @array: the array to iterate
 * @size: size of array
 * @action: function to execute element of each array
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
