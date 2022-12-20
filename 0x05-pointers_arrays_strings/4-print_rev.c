#include "main.h"
/**
 * print_rev - imprime and reverse
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int len = 0;
	int r;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	s--;

	for (r = len; r > 0; r--)
	{
		_putchar(*s);
		s--;

	}

	_putchar('\n');

}
