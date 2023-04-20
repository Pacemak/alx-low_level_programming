#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints opcodes of a given start pointer
 * @start: pointer to the start of the code
 * @n_bytes: number of bytes to print
 *
 * Return: void
 */

void print_opcodes(char *start, int n_bytes)
{
	int i;

	for (i = 0; i < n_bytes; i++)
	{
		printf("%02hhx ", start[i]);
	}

	printf("\n");
}
/**
 * main - prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if successful, 1 if wrong number of arguments,
 * 2 if negative number of bytes
 */

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int n_bytes = atoi(argv[1]);

	if (n_bytes <= 0)
	{
		printf("Error\n");
		return (2);
	}
	char *start = (char *)main;

	print_opcodes(start, n_bytes);
		return (0);
}
