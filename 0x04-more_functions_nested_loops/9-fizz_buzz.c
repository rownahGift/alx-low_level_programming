#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by 
 * a new line
 * but for the multiples of three prints Fizz instead of th
 * e number
 * and for the multiples of five prints Buzzz
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		}
		else if ( i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");

	return (0);
}
