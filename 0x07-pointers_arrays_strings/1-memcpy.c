#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: address memory store
 * @src: memory to copy
 * @n: number to return.
 *
 * Return: copied memory with n byted chaged
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r > i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}