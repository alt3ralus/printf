#include "holberton.h"

/**
 * print_char - prints char
 * @argumentos: parameter to print 
 */
void print_char(va_list argumentos)
{
	char pc = (char, va_arg(argumentos, int));
	_putchar(pc);
}

void print_string(va_list argumentos)
{
  printf("%s", va_arg(argumentos, char *));
}
void print_decimal(va_list argumentos)
{
  printf("%d", va_arg(argumentos, int));
  putchar('1');
}
void print_integer(va_list argumentos)
{
  printf("%i", va_arg(argumentos, int));
   putchar('1');
}
