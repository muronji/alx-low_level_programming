#include"main.h"
/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int x, ch; 

	for (x = 0; x <= 9; ++x)
	{
		for (ch = 'a'; ch <= 'z'; ++ch)
			_putchar(ch);
		_putchar('\n');
	}
}
