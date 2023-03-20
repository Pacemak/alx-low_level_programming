#include <stdio.h>
/**
 * main - A program that prints the sixe of various computer types
 *
 * Return: always 0
 */

int main(void)
{
	printf("Size of a char: %i byte(s)\n", sizeof(char));
	prinf("size of an int: %i byte(s)\n", sizeof(int));
	printf("size of long int: %i byte(s)\n", sizeof(long int));
	printf("size of long long int: %i byte(s)\n", sizeof(long long int));
	printf("size of float: %i byte(s)\n", sizeof(float));
	return (0);
}
