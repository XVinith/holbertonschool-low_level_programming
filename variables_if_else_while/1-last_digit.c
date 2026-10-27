#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Short description, single line
 *
 * Return: Description of the returned value
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d ", n);
	while (n > 9 || n < -9)
		n %= 10;
	printf("is %d and ", n);
	if (n > 0)
		printf("is positive\n");
	else if (n == 0)
		printf("is zero\n");
	else
		printf("less than 6 and not 0\n");
	return (0);
}
