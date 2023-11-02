#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argv: An array of strings containing the command line argument
 * @argc: The number of command line argument
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
int i;
(void) argc;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}


