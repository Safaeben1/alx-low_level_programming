#include "main.h"
/**
 * _puts -  prints a string
 * owned by sfiya
 * @str: the string
 * Return : 0 is success
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
