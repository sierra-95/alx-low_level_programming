#include "main.h"
/**
 **_strcpy - check the code
 * @dest: returning array
 * @src: string recipient
 *Return: parameter dest
 */
char *_strcpy(char *dest, char *src)
{
 int n = 0;
 int i;
 
 while (src[n] != '\0')
 {
     n++;
 }
 i = 0;
 while(i < n && src[i] != '\0')
 {
     dest[i] = src[i];
     i++;
 }
 i = 1;
 while (i <= n)
 {
     dest[i] = '\0';
     i++;
 }
 return (dest);
}
