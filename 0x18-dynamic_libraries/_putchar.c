#include <unistd.h>

/**
 * _putchar - function that prints characters
 * @c: characyer to be printed
 * Return: character (success)
 **/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
