#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char a, b;

	for (a = 'a'; a <= 'z'; a++)
	for (b = a; b <= 10; b++)
		_putchar(b);
	
	_putchar('\n');
}
