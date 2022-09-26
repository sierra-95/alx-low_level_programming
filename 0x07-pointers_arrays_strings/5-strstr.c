#include "main.h"
/**
*_strstr - first occurence
*@haystack: main str
*@needle: searched in haystack
*Return: Always 0
*/
char *_strstr(char *haystack, char *needle)
{
char *str1, *str2;
	
while (*haystack != '\0')
{
str1 = haystack;
str2 = needle;
while (*haystack != '\0' && *str2 != '\0' && *haystack == *str2)
{
haystack++;
str2++;
}
if (*str2 == '\0')
return (str1);
haystack = str1 + 1;
}
return (0);
}
