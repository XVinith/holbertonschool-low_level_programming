#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Short description, single line
 * @c: the character to check
 * Return: Description of the returned value
 */
int _isalpha(int c)
{
	if (islower(c) || isupper(c))
		return (1);
	else
		return (0);
}
