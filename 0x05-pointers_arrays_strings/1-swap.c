#include "main.h"
/**
 * swap_int - swaps the value of 2 integers
 * @a: pointer to value 1
 * @b: pointer to value 2
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
