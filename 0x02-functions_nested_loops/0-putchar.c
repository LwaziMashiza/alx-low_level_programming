#include <unistd.h>
/**
* main - Prints _putchar using unistd.h header
*
* Return: Always 0
*/
int main(void)
{
	char message[] = "_putchar\n";

	for (int i = 0; message[i] != '\0'; i++)
	{
	_putchar(message[i]);
	}
	return (0);
}
