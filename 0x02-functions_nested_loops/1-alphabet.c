#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a < 'z'; a++)
		_putchar(a);

	_putchar('\n');
	return (0);
}
