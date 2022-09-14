#include "main.h"
/**
*main -executes
*print_sign -prints sign
*Return 1-if true
*Return 0 -d
**/
int print_sign(int n)
{
	if(n>0)
	{
		_putchar('+');
		return (1);
	}
	else if(n==0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-')
		return (-1);
	}
}
