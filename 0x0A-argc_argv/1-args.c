#include <stdio.h>
/**
*main - carries out
*@argc - count
@argv - vector command
*Return: Always zero
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf(" %s",argv[i]);
}
printf("\n");
return 0;
}
