#include"main.h"
/**
 * a function that prints number signs
 * @n:the numberwhose sign will be printed
 * Return:1 if number is above zero
 * 	  0 if the number is zero
 * 	  -1 if the number is below zero
 */
int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		 return (-1); 
	}
}	
