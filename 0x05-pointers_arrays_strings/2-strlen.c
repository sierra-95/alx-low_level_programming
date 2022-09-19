#include "main.h"
/**
 * _strlen -Function shows string length
 * @s: input
 * Return: string length
 */
 int _strlen(char *s)
 {
     int length;
     
     for (length = 0; s[length] != '\0'; length++)
     ;
     return (length);
 }
