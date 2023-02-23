#include <stdio.h>

/**
 * print_to_98 - prints natural numbers from input to 98
 * @n: the input to count from
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i > 98; i--)
		printf("%d\n", i)
}
