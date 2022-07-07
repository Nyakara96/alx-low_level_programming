#include"main.h"
/**
 * print_last_digit-a function that prints the last digits
 * @n-takes in an integer
 * Result:returns an output
 */
int print_last_digit(int)
{
	int x;

	if (n < 0)
	    n = -n;
	x = n % 10;
	_putchar(x + '0');
	return (n % 10);
}
