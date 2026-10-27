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
	if (n > 0) 
        printf("is positive");
    else if (n == 0) 
        printf("is zero");
    else
        printf("is negative");
	return (0);
}