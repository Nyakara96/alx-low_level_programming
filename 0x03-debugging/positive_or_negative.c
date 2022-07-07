#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-assign a random number to variable
 * print the last digit of the number stored in variable n
 * Return:Always zero
 */
int main(void)
{
int n;

srand time(time(0));
n = rand() - RAND MAX / 2;
if (n > 0)
	printf("%d is positive\n",n)
if (n == 0)
	printf("%d is zero\n",n)
if (n < 0)
	printf("%d is negative\n",n)
}
return (0);
}
