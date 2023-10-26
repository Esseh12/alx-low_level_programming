#include <stdio.h>
#include <unistd.h>
#include "main.h"

void _putschar(char c)
{
    write(1, &c, 1);
}

void _puts_recursion(char *str)
{
    if (*str)
    {
        _putschar(*str);
        _puts_recursion(str + 1);
    }
}

int main(void)
{
    char *str[] = "Puts with recursion";
    _puts_recursion(str);
    return 0;
}
