#include "main.h"
/**
* *cap_string - All first letters changed to  uppercase
* @str: parameter to capitalize
* Return: return is a character in uppercase
* */
char *cap_string(char *)
{
int index = 0;
    
while (str[++index])
{
while(!(str[index] >= 'a' && str[index] <= 'z'))
index++;
        if (str[index - 1] == ' ' ||
                        str[index-1] == '\t' ||
                        str[index-1] == '\n' ||
                        str[index-1] == ',' ||
                        str[index-1] == ';' ||
                        str[index-1] == '.' ||
                        str[index-1] == '!' ||
                        str[index-1] == '?' ||
                        str[index-1] == '"' ||
                        str[index-1] == '(' ||
                        str[index-1] == ')' ||
                        str[index-1] == '{' ||
                        str[index-1] == '}')
str[index] -= 32;        
}
return (str);
}
