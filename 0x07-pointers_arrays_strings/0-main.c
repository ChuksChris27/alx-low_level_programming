#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * 
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}

/**
 * print_string - prints a string using _putchar
 * @str: The string to print
 */
void print_string(const char *str)
{
    while (*str)
    {
        _putchar(*str++);
    }
}

/**
 * print_hex - prints a hex value using _putchar
 * @num: The number to print in hex
 */
void print_hex(unsigned char num)
{
    char hex_digits[] = "0123456789abcdef";

    _putchar('0');
    _putchar('x');
    _putchar(hex_digits[num / 16]);
    _putchar(hex_digits[num % 16]);
}

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            _putchar(' ');
        }
        if (!(i % 10) && i)
        {
            _putchar('\n');
        }
        print_hex(buffer[i]);
        i++;
    }
    _putchar('\n');
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char buffer[98] = {0x00};

    simple_print_buffer(buffer, 98);
    _memset(buffer, 0x01, 95);
    print_string("-------------------------------------------------\n");
    simple_print_buffer(buffer, 98);    
    return (0);
}
