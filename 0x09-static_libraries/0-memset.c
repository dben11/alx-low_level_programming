#include "main.h"

/**
 * _memset - functions to fill the memory
 * @s: pointed memory area
 * @b: the adress of the memory
 * @n: size of the memory
 *
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
