#include "main.h"
#include <ctype.h>

/**
 * _islower - Short description, single line
 * @c: the character to check
 * Return: Description of the returned value
 */
int _islower(int c)
{
	if (islower(c))
		return (c);
	else if (!islower(c))
		return (1);
	else
		return (0);
}
