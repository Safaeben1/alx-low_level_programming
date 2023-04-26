#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @r : parameter
 * owned by sfiya
 * Return: Always 0.
 */

int print_last_digit(int r)
{
	int t;

	if (r < 0)
	{
		r = -r;
	}
	t = r % 10;
	_putchar('0' + t);
	return (0);
}
