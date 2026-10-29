#include <stdio.h>

/**
 * main - Short description, single line
 *
 * Return: Description of the returned value
 */
int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		putchar('0' + n);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
