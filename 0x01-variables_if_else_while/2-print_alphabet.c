#include <stdio.h>
/**
 * main - prints letters a-z
 * Return: 0 if succesful
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return(0);
}
