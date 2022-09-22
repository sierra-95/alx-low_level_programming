#include "main.h"
/**
* *string_toupper - changes all lowercasee letter of a string to uppercase
* @str: parameter
* Return: return is a character
*/
char *string_toupper(char *str)
{
int index = 0;
   
while (str[index++])
{
if (str[index] >= 'a' && str[index] <= 'z')
str[index] -= 32;
}
return (str);
}
