#include "holberton.h"

/**
 *
 *
 */


void print_char(char *c)
{
  printf("print char \n");
}
void print_string(char *c)
{
  printf("print string \n");
}
void print_decimal(char *c)
{
  printf("print decimal \n");
}
void print_integer(char *c)
{
  printf("print integer \n");
}


int _printf(const char *format, ...)
{
  estructura_t pArray[] = {
			   {"c", print_char},
			   {"s", print_string},
			   {"d", print_decimal},
			   {"i", print_integer}
			   {NULL, NULL}
  };

  int x;
  int y;

  va_list argumentos;

  va_start(argumentos, format);

  for (x = 0; format[x] != '0'; x++)
    {

      if (format[x] != '%')

	{
	  _putchar(format[x]);

	}
      else if (format[x] == '%' && format[x + 1] == '%')
	{
	  _putchar(format[x]);
	  x++;
	}
      else if (format[x] == '%')

	for (y = 0; pArray[y] != NULL; y++)
	  {


	  }

    }
}
