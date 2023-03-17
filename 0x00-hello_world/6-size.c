#include <stdio.h>
/**
 * main - Enty point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(d));
	printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(b));
	printf("Size fo a long long int: %lu bytes(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float :%lu bytes(s)\n", (unsigned long)sizeof(f));
	printf("Size of a int: %lu bytes(s)\n", (unsigned long)sizeof(a));
	return (0);

}
