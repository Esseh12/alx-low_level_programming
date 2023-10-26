#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/** main - Entry point 
 *
 * Return: Always 0 (success)
 *
 */

int factorial(int n)
{
if (n < 0)
{
return -1;
}

if (n == 0)
{
return 1;
}

return (n * factorial(n - 1));
}

int main(void)
{
int f;

f = factorial();
puts(f);

return (0);
}
