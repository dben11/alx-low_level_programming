#include "main.h"

/**
 * _puts - functions that prints a string
 * @str: string to be printed
 * Return: 0
 */
void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}

	_putchar('\n');
}
