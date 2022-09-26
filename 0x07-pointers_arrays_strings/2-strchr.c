#include "main.h"
/**
*_strchr - Locates a character in a string
*@s: string
*@c: Character to search
*Return: pointer to the first occurence of character c
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
++s;
}
if (*s == c)
{
return (s);
}
return (0);	
}
