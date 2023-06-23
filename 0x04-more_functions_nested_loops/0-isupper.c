#include "main.g"

/**
 * _isupper - check if c is upper
 *
 * @c: inputfor alphabet
 *
 * Return: 1 if upper. 0 if not.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
