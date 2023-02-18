#include <stdio.h>

/**
 * main - program that prints all possible combinations of two-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	for (b = a + 1; b < 10; b++)
		putchar(a / 10 + '0');
		putchar(b % 10 + '0');
		putchar(' ')
		putchar(a / 10 + '0');
		putchar(b % 10 + '0');

		if (a == 9 && b == 8 && a == 9 && b == 9)
			continue;
		putchar(',');
		putchar(' ');

	putchar('\n');
	return (0);
}
