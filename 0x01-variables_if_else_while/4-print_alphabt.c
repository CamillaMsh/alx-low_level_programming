#include <stdio.h>

/**
 * main - Print all the letter of the alphabets excluding e and q
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{

	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}

	putchar('\n');

	return (0);

}
