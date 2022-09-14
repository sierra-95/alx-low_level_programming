#include "main.h"
/**
*main -executes
*print_last_digit -prints last digit
*Return:always 0
**/
int print_last_digit(int n)
{
	int x;
	if(n<0)
	n=-n;
	x=n%10;
	_putchar(x + '0');
	return (x);
}
