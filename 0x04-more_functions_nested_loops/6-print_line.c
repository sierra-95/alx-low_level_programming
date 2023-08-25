#include <stdio.h>
#include "main.h"

/**
*print_line - printd line
*@n: parameter
*Return: return 0
*/

void print_line(int n)
{
  while (n-- > 0)
  {
    putchar('-');
  }
  putchar('\n');
}
