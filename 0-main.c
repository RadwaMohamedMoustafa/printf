#include <limits.h>
#include <stdio.h>
#include "main.h"


int main()
{
    char c = 'A';
    char *s = "hello, world!";

    _printf("Printing a character: %c\n", c);
    _printf("Printing a string: %s\n", s);
    _printf("Printing a percent sign: %%\n");

    return 0;
}
