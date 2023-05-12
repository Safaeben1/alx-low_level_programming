#include "main.h"
/**
 * _strlen - returns the length of a string.
 * owned by sfiya
 * @s: char to check
 * Description: this will return the length of a string
 * Return: 0 is success
 */

int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
