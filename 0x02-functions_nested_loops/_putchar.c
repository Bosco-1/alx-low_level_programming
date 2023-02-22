#include <unistd.h>
/**
 * _putcar - writes the character c to standout
 * @c: The character to print 
 * Return: On success 1.
 * On error, -! is returned, and errno is set appropriately.
 */

int _putchar(char c)
{

return (write(1, &c, 1));
}
