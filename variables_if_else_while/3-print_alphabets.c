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
		putchar(n++);
	n = 'A';
	while (n <= 'Z')
		putchar(n++);
	putchar('\n');
	return (0);
}
