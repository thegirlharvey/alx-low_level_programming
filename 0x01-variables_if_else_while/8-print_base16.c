#include <stdio.h>

/**
 * main - prints base16 numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 16; ++n)
		putchar('0' | n);
	putchar("\n");
	return (0);
}
