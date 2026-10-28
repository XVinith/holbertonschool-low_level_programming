#include <stdio.h>

/**
 * main - Short description, single line
 *
 * Return: Description of the returned value
 */
int main(void)
{
	int n;

	n = 'a';
	while (n <= 'z')
	{
		if (n != 'q' && n != 'e')
			putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
