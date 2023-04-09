#include "main.h"

/**
 * _memcpy - functions that copies memry area
 * @dest:memory destination
 * @src:memory area
 * @n:size of bytes memory
 * Return: return dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);

}
