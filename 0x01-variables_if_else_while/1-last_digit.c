#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
		printf("and is greater than 5%d\n", n);
	else if (n == 0)
		printf("and is 0%d\n", n);
	else
		printf("and is less than 6 and not 0%d\n", n);
	return (0);
}
