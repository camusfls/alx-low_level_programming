/**
 * main - check the code
 *
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)

{
        if (*s == '\0')
        {
                _putchar ('\n');
        }
        else
        {
                _puts_recursion(s + 1);
	       	_putchar(*s);
	}
}
