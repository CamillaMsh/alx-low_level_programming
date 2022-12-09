#include <stdio.h>

/**
 * main - Print letter of the alphabets in reverse mode
 * followed by a new line each time
 * Return: Always 0
 */
int main(void)
{

	char Za;

	for (Za = 'z'; Za >= 'a'; Za--)
		putchar(Za);

	putchar('\n');

	return (0);

}
