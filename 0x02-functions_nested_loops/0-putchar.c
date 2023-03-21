#include "main.h"
#include <unistd.h>
/**
* main - Prints _putchar using unistd.h header
*
* Return: Always 0
*/
int main(void)
{
	char *p = "_putchar\n";

	while (*p)
	{
	_putchar(*p);
	p++;
	}
	return (0);
}
