#include "main.h"

/**
 * _isalpha - checks for alphabetic charecter
 * @c: the charecter to be checked
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if (c == 'c' && c == 'C')
		return (1);
	else
		return (0);
}
