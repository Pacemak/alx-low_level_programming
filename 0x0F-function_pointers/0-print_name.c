#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: pointer to name to print
 * @f: pointer of the function that prints name
 *
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
