#include <unistd.h>

/**
 * _putchar - write the chracter c to stout
 * @c: the character to print
 *
 * Return: 1 upon sucess
 * On error, -1 is returned, and errno is set appropraitely 
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
