#include "holberton.h"

/**
 * _printf - A function
 * @format: array of char = String.
 * Return: Len of string.
 */

int _printf(const char *format, ...)
{
  estructura_t pArray[] = {
			   {"c", print_char},
			   {"s", print_string},
			   {"d", print_decimal},
			   {"i", print_integer},
			   {NULL, NULL}
  };

  int x;
  int y;

  va_list argumentos;

  va_start(argumentos, format);

  for (x = 0; format[x] != '\0'; x++)
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
	{
	  for (y = 0; pArray[y].cadena != NULL; y++)
	    {
	      if (format[x + 1] == pArray[y].cadena[0])
		{
		  pArray[y].pointF(argumentos);
		  x++;
		}
	    }
	}
    }
  va_end(argumentos);
  return (0);
}
