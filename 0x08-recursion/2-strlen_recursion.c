#include "main.h"

/**
 * _strlen_recursion - function to return length of string
 * @s: string to be return
 * Return: lenght of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));

}
