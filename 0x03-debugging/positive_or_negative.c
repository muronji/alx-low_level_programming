#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program generates a random number
 * and checks if positive or negative then prints it
 * Return: 0 if succesful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (0 == n)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}

