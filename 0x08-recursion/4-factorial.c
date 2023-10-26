#include <stdio.h>
#include <stdlib.h>

/* main - Entry point 
 *
 * Return: Always 0 (success)
 *
 */

int factorial(int n){
if (n == 0){
return (1);
}
return (n * factorial (n - 1));
}

int main(void){
int f;
int d;
printf("Enter a number: \n");
scanf("%d", &d);
f = factorial(d);

printf("factorial: %d\n", f);
return(0);
}

