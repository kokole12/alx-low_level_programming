#include <unistd.h>

/**
 *
 * _putchar - writes character to stdout
 *
 * @c: character to print
 *
 * Return: always return 1 on sucess
 */
int _putchar(char c)
{
	return (write(1, &c, 1);
}
