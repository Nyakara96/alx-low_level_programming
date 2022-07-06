#include"main.h"
/**
 * int _islower(int c)-returns 1 if it`s lowercase and 0 if not
 * @c-registers a character
 * Return:0 for uppercase ,1 for lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
