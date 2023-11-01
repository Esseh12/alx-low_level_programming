#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of program
 *
 * @argc: The number of command line arguments
 * @argv: An array of atring containing the command line arguments
 *
 * Return: Alway 0 (success)
 */

int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
