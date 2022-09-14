#include "main.h"

/**
 *
 * main -execute
 * Return :always 0
 * print_alphabet_x10 -prints
 * */
void print_alphabet_x10(void)
{
	int j,x;
	for(x=0;x<10:x++)
	{
		for(j='a';j<='z';j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
