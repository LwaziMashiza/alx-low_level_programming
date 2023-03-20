#include<unistd.h>
/**function to replace printf*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
