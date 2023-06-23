#include "main.h"

/**
 * print_numbers - print 0 - 9
 * only using _putchar twice
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		_putchar(number);
	}
	_putchar('\n');
}
