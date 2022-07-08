#include "main.h"

/**
 * print_square - printing line
 * @size: integer params
 */
void print_square(void)
{
	int x, y;

	if (sixe <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
