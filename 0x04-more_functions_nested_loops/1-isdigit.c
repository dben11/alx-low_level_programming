#include "main.h"
/**
 * _isdigit - functions that check for digits
 * @c: Integer holding the function
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	if (c >= 45 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
