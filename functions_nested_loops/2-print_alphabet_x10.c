#include "main.h"

/**
 * print_alphabet - Short description, single line
 *
 * Return: Description of the returned value
 */
void print_alphabet_x10(void)
{
	int n;
	int i;

	n = 'a';

	for (i = 0; i <= 10; i++)
	{
		while (n <= 'z')
			_putchar(n++);
	}
	_putchar('\n');
}
