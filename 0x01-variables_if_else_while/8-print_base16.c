#include <stdio.h>

/**
 * main - print lower case letter of base 16
 * Return: Always 0
 */
int main(void)
{

	int num;
	char la;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (la = 'a'; la <= 'f'; la++)
		putchar(la);

	putchar('\n');

	return (0);

}
