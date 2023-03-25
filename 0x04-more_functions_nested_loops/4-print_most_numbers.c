#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: 0-9, excluding 2 and 4, followed by new line
 */
void print_most_numbers(void)
{
	char c;

	for (c = 48; c < 58; c++)
	{
		if (c != 50 && c != 52)
			_putchar(c);
	}
	_putchar('\n');
}
