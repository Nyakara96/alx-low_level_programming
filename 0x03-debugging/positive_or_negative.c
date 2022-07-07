#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-assign a random number to variable
 * print the last digit of the number stored in variable n
 * Return:Always zero
 */
void positive_or_negative(int i)
{
int n;

srand time(time(0));
n = i;
if (n > 0)
	printf("%d is positive\n",n)
if (n == 0)
	printf("%d is zero\n",n)
if (n < 0)
	printf("%d is negative\n",n)
}
return (0);
}
