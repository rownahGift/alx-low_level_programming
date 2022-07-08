#include <stdio.h>

/***
 * main - prints prime factors
 * Return: 0
 */

int main(void)
{
	long int number = 612852475143, largest = 0, i = 2;

	while (number != 1)
	{
		if (number % ! == 0)
		{
			number /= i;
		}
		largest = i;
	}
	i++;
}
printf("%d", largest);
printf("\n");

return (0);
