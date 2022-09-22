#include "main.h"
/**
* *leet - encodes a string
* @str: string to be encoded
* Return: return encoded string
* */
char *leet(char *)
{
int index1 = 0, index2;
char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};
		    
while (str[++index1])
{
for (index2 = 0; index2 <= 7; index2++)
{
if (str[index1] == leet[index2] || str[index1] - 32 == leet[index2])
 str[index] = index + '0';
}
}
return (str);
}