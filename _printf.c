#include "holberton.h"
/**
 *
 *
 */
void print_char(char *c)
{
  printf(c);
  printf("print char \n");

  /*int i;
  for (i = 0; c[i] != '\n'; i++ )
    {
    _putchar(c[i] + '0');
    }*/
}
void print_string(char *c)
{
  printf(c);
  printf("print string \n");
}

int _printf(const char *format, ...)
{
  estructura_t pArray[] = {
			   {"c", print_char},
			   {"s", print_string},
			   {NULL, NULL}
  };

  int x = 0;
  int y = 0;

  va_list argumentos;

  va_start(argumentos, format);

  while (format[y] != '\0')
    {
      x = 0;

      while (pArray[x].cadena != NULL)
	{
	  if (format[y] == pArray[x].cadena[0])
	    {
		    _printf("formato: %s\n", format);

	      pArray[x].pointF(argumentos);
	    }
	  x++;
	}
      y++;
    }
  return (0);
}
