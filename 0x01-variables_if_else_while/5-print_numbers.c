#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Prints the nunber from 0 to 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
