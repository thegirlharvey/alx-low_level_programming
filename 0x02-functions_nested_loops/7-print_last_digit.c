#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: the number were working with
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');

	Return(ld);
}
