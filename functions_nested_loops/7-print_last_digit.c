#include "main.h"

/**
 * print_last_digit - Short description, single line
 * @i: number
 * Return: Description of the returned value
 */
int print_last_digit(int i)
{
	if (i < 0)
		return (-i % 10); 
	return (i % 10);
}
