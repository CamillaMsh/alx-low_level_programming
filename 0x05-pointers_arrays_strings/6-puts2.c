#include "main.h"

/**
 * puts2 - function should printonly one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int len = 0;
	int p = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		len++;
	}

	p = len - 1;
	for (o = 0; o <= p; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');

}
