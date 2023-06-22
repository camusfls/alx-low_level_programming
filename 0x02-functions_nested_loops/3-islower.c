#include "main.h"
/**
 * _islower - Shows if the input is a
 * lowercase or if a higher case
 * @c: The character to be checked.
 *
 * Return: 1 for lowercase characte. 0 for higher}
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
