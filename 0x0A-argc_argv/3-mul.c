#include <stdio.h>
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
printf("\n");
return 0;
}
 
