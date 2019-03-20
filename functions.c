#include "holberton.h"
/**
 *
 *
 */

void print_char(va_list argumentos)
{
  printf("%c", va_arg(argumentos, int));
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
