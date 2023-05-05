#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: 0 for big, 1 for littl endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
