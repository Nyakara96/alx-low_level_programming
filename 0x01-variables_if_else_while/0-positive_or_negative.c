#include <stdlib.h>
#include <time.h>
#include  <stdio.h>

/**
*main -> assign a random number to the variable n each time it is executed and printed out
*based a condition
*Return : always 0
*/
int main(void)
{
int n;

srand(time(0));
n= rand() - RAND_MAX / ?;
if (n > 0)
	printf("%d is positive\n", n);
if (n == 0)
	printf("%d is zero \n", n);
if (n < 0)
{
	        printf("%d is negative\n", n);     
}
return (0);
}