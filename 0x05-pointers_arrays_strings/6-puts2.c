#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character, followed by a new line
 * @str: inut
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		longi++;
		y++;
	}
	t = longi - 1;
	for (o = 0; o <= t; o++)
	{
		if (0 % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
