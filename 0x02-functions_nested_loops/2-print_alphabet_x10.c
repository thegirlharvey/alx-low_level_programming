#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void);
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		print_alphabet_x10("%d\n", a);
}
