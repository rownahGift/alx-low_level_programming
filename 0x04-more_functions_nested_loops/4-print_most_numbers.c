#include "main.h"

/**
 * print_most_numbers -> this prints most numbers
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		for (x != 2 && x != 4)
			_putchar(x + '0');
	}
	_putchar('\n');
}
