#include "main.h"

/**
 * _memset - functions to fill the memory
 * @s: poited memory area
 * @b: the address of the memory
 * @n: size of the memory
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
