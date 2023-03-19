#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';
	/*print lowercase alphebet*/

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	/*printing for uppercase letters*/
	letter = 'A';

		while (letter <= 'Z')
		{
			putchar(letter);
			letter++;
		}
	putchar('\n');
	return (0);
}
