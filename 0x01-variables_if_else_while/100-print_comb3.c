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
	for (b = 0; b < 10; b++)
	{
		putchar((a % 10) + '0');
		putchar((b % 10) + '0');
		if (a == 8 && b == 9)
			continue;
		while (b < 10)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
