#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int* ptr;
int n, i;

printf("Enter a number of elements: ");
scanf("%d", &n);
printf("Entered number of elements: %d\n", n);

ptr = (int*)malloc(n * sizeof(int));

if (ptr == NULL){
printf("memory not allocated.\n");
exit(0);
}

else {
printf("memory successfully allocated using malloc. \n");

for (i = 0; i < n; ++i);{
ptr[i] = i + 1;
}

printf("The elements of the array are: ");
for (i = 0; i < n; ++i)
{
printf("%d, ", ptr[i]);
}
}

return 0;
}
