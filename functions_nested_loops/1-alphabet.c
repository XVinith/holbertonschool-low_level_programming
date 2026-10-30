#include "main.h"

/**
 * main - Short description, single line
 *
 * Return: Description of the returned value
 */
void print_alphabet(void)
{
	int n;

	n = 'a';
	while (n < 'z')
	{
		_putchar(n++);
	}
	
	_putchar('\n');
}
