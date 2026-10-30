#include "main.h"

/**
 * print_alphabet_x10 - Short description, single line
 *
 * Return: Description of the returned value
 */
void print_alphabet_x10(void)
{
	int n;
	int i;

	i = 0;
	for (; i < 10; i++)
	{
		n = 'a';
		while (n <= 'z')
			_putchar(n++);
		_putchar('\n');
	}
}
