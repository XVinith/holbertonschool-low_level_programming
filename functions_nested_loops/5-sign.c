#include "main.h"
#include <stdio.h>

/**
 * print_sign - Short description, single line
 * @n: the character to check
 * Return: Description of the returned value
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
