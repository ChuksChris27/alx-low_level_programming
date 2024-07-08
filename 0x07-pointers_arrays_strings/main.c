#include "main.h"
#include <stdio.h>

int main(void)
{
    char buffer[50] = "Hello, World!";
    unsigned int n = 5;

    printf("Before: %s\n", buffer);
    _memset(buffer, 'x', n);
    printf("After: %s\n", buffer);

    return (0);
}
