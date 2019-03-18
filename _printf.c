#include "holberton.h"
/**
 *
 *
 *
 *
 *
 */

void print_char(char *c)
{
	int i;

	for (i = 0; c[i] != '\n'; i++ )
	{
		_putchar(c[i]);
	}
}
void print_str(char *s)
{


}



int _printf(const char *format, ...)
{
	funny_a pArray[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
	}


}
