#include "main.h"

/**
 * _islower - check for lower case
 *  @c : to check character
 *  Return: 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
