#include "main.h"
#include <stdio.h>
/**
 *print_array - check the code
 * @a: variable
 * @b: variable 2
 *Return: No
 */
void print_array(int *a, int n);
{
    int i;
    
    for(i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    
    
    if (i < n - 1)
    {
        printf(", ");
    }
}
putchar('\n');
}
