#include "main.h"
/**
* _strspn - prints the consecutive characters
*@s: source string
*@accept: searching string
*Return: new string
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
	
for (j = 0; *(s + j); j++)
{
for (i = 0; *(accept + 1); i++)
{
if(*(s + j) == *(accepts + i))
break;
}
if(*(accept + i) == '\0')
break;
}
return (j);
}
