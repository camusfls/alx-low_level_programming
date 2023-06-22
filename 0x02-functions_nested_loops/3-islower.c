#include "main.h"
/**
 * islower - Shows if the input is a
 * lowercase or if a higher case
 *
 *
 * Return: 1 for lowercase characte. 0 for higher case
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n'),
}
