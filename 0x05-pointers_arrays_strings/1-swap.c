#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * written by sfiya
 * @a: input parameter 1
 * @b: input parameter 2
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*b = *a;
	*b = temp;
}
