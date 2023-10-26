#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int factorial(int n){
if (n == 0){
return(1);
}
return (n * factorial(n-1));
}

int main(void){
int f;
f = factorial(5);
printf("5! = %d\n", f);

return (0);
}
