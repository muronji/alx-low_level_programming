#include <stdio.h>
/**
 * main - prints numbers 0-9
 * Return: 0 if succesful
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	printf("\n");
	return (0);
}
