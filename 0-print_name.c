#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name -  function that prints a name.
 * @name: pointer to the name to be printed
 * @f: pointerto a fuction that prints a name
 *
 * Return:0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
