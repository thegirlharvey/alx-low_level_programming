#include <stdio.h>

/**
 * main - prints base16 numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char a;

	for (n = 0; n <= 10; ++n)
	putchar('0' | n);
	for (a = 'a'; a <= 'f'; ++a)
	putchar(a);
	putchar('\n');
	return (0);
}
