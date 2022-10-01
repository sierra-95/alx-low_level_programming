#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*main - carries out
*@argc - count
@argv - vector command
*Return: Always zero
*/
int main(int argc, char *argv[])
{
int i,mult = 0;
if(argc > 1)
{
for (i = 1; i < argc; i++)
{
printf("%s\n", argv[i]);
  mult *= atoi(argv[i]);
}
}
else if(argc == 0)
{
printf("Error");
}
printf("%d\n",mult);
return 0;
}
 
