#include <stdio.h>
/**
 * main - A program that prints the sixe of various computer types
 * Return: 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %d byte(s)", sizeof(char));
	prinf("size of an int: %d byte(s)", sizeof(int));
	printf("size of long int: %d byte(s)", sizeof(long int));
	printf("size of long long int: %d byte(s)", sizeof(long long int));
	printf("size of float %d byte(s)", sizeof(float));
	return (0);
}
