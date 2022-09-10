#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates a random number and compares it to 0,5 and 6
 * then prints
 * Return: 0 if succesful
 */
int void(main)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", n, n % 10);
	if (n % 10 > 5)
		printf("and is greater than 5\n");
	else if (n % 10 == 0)
		printf("and is 0\n");
	else if (n % 10 < 6 && n % 10 != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}