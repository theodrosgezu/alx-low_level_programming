#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random number and prints whether it is positive,
 * negative, or zero
 *
 * Return: 0 if successful
 */
int main(void)
{
	/* initialize random number generator */
	srand(time(0));

	/* generate random number */
	int n = rand() - RAND_MAX / 2;

	/* check if number is positive, negative, or zero */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
