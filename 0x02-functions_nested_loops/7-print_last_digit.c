#include"main.h"
/**
 * a function that prints the last digits
 * @n-takes in an integer
 * Result:returns an output
 */
int print_last_digit(int)
{
	int ln = n % 10;

	if (n < 0)
		ln = ln* -1;
	_putchar(ln + '0');
	return (ln);
}
