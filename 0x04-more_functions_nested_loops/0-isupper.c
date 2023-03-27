#include "main.h"
#include <stdio.h>
/**
 * _isupper - check for upper character
 * @c: representing a character
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
