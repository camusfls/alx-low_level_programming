#include "main.h"

/**
 * more_numbers - print 0 - 15 10 times using _putchar 3 times
 *
 *
 * Return: always 0 (Success)
 */
void more_numbers(void)
{
	int number, tens, units, row;

	for (row = 1; row <= 10; row++)
	{
		for (number = 0; number <= 14; number++)
		{
			tens = number / 10;
			units = number % 10;
			if (number > 9)
				_putchar(tens + '0');

			_putchar(units + '0');
		}
		_putchar('\n');
	}
}
