#include <stdio.h>
#include <stdlib.h>

/**
 * main -  Entry point of program
 *
 * Return: Always 0 (success)
 */

int main(int argc, char* argv[])
{
int i, sum = 0;
printf("argc = %d\n", argc);
printf("lets see what is in argv[]\n");

if (argc > 1)
{
for (i = 0; i < argc; i++)
{
printf("argv[%d] = %s\n", i, argv[i]);
sum += atoi(argv[i]);
}
printf("Total = %d\n", sum);
}
return 0;
}
