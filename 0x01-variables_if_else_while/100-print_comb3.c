#include <stdio.h>

/**
 * main - prints different combs on double digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	for (b = a + 1; b < 10; b++)
		putchar(a + '0');
		putchar(b + '0');
			putchar(',');
			putchar(' ');
	putchar('\n');
	return (0);
}
