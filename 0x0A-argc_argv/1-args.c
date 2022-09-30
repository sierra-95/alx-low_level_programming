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
printf ("%d", argc);
for (i = 0; i < argc; i++)
{
if(argc > 5)
printf("%s", argv[i]);
}
printf("\n");
return 0;
}
