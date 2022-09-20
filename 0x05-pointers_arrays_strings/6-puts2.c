#include "main.h"
/**
 * puts2 - prints one char out of 2 of a string
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int j, i;

	j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
