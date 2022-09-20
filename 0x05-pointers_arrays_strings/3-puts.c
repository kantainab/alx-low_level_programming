#include "main.h"
#include "2-strlen.c"

/**
 * _puts - print string with new line
 * @str: this is the pointer for the string to be printed
 * Return always 0.
 */

void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str++);

	_putchar('\n');
}
