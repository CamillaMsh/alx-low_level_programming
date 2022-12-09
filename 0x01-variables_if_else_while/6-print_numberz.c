#include <stdio.h>

/**
 * main - print single numbers from 0 to 9 using putchar to display output
 * following a new line
 * Return: Always 0
 */
int main(void)
{

	int num2;

	for (num2 = 0; num2 < 10; num2++)
		putchar((num2 % 10) + '0');

	putchar('\n');

	return (0);

}
