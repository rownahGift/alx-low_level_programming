#include "main.h"

/**
 * print_most_numbers -> this prints most numbers
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		for (x != 2 && x != 4)
			_putchar(x + '0');
	}
}
