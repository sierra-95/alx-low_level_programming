#include "main.h"
/**
* *_strcat - concanates 2 strings
* @dest: string to be used
* @src:string to be concanated
* Return: dest
**/
char *_strcat(char *dest, char *src)
{
int index = 0, dest_len = 0;

while (dest[index++])
dest_len++;
for (index = 0; src[index]; index++)
dest[dest_len++] = src[index];
return (dest);
}
