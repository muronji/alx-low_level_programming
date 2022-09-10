#include <stdio.h>
/**
 * main - prints the alphabet backwards
 * Return: 0 is succesful
 */
int main(void)
{
	char ch = 'z';

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
