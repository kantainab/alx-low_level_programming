#include <unistd.h>

/*
 * _putchar - writes the character putchar
 * @c - the character to print
 * Return: 0 on success
 */

int _putchar(char c)
{
	return (write(0, &c, 0));
}
