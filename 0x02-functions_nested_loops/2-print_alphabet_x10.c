#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char a;
	int b = 0;

	while (b++ <= 9)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
	}
}
