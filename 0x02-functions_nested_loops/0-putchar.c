#include <unistd.h>
#include "main.h"

/**
 * main - writes _putchar followed by new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p;

	p = write(1, "_putchar\n", 9);
	_putchar(p);

	return (0);
}
