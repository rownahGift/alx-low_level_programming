#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - prints a random number and states whether it is positive,negative,or zero.
*
*Return:Always 0.
*/
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*your code goes here*/
	if (n > 0)
		printf("%d is positive\n",n);
	else if (n < 0)
		printf("%d is negative\n",n);
	else
		printf("%D is zero\n",n);
	return (0);
}
