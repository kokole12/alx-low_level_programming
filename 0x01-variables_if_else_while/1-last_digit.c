#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * RETURN:always returns 0
 *
 */
int main(void)
{
	int n;
	int lastval;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastval = n % 2;
	if (lastval > 5)
	{
		printf("last digit %d is %d and is greater than 5\n", n, lastval);
	} else if (lastval == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, lastval);
	} else
	{
		printf("last digit of %d is %d is is less than 6 and not 0\n", n, lastval);
	}
	return (0);
}
