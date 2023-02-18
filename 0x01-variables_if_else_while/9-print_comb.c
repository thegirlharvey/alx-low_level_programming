#include <stdio.h>

/**
 * main - prints numbers with ,
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; ++n)
		putchar('0' | n);
	putchar('n,');
	putchar('n, ');
	return (0);
}
