#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * if odd len, n =(length_of_the string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int p, n, len;

	len = 0;

	for (p = 0; str[p] != '\0'; p++)
		len++;

	n = (len / 2);

	if ((len % 2) == 1)
		n = ((len + 1) / 2);

	for (p = n; str[p] != '\0'; p++)
		_putchar(str[p]);

	_putchar('\n');

}
