#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - prints the result of simple operations
 * @argc: the number of arguments suppliednto the program
 * @argv: an array of pointers to the arguments.
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*op_func)(int, int);
	
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op_func = get_op_func(argv[2]);
	
	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	
	if ((*argv[2] == '/'
}
