#include <stdio.h>
/**
* main - Prints numbers between 0 to 9 and letters between a to f.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int r;

	for (r = 48; r < 58; r++)
	{
	putchar(r);
	}
	for (r = 97; r < 103; r++)
	{
	putchar(r);
	}
	putchar('\n');
	return (0);
}
