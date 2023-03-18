#include <stdio.h>

/**
 * main - Prints alphabets in lower then uppercase
 *
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		putchar(i);

	}

	for (i = 'A' ; i <= 'Z' ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
