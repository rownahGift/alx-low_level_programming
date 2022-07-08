#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks for uppercase letters
 *
 * @c:parameter to be printed
 *
 * Return: 0 0r 1 depending on the condition
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
