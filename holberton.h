#ifndef HOLBERTON_H_
#define HOLBERTON_H_
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>


typedef struct estructura {
	char * cadena;
	int (*pointF) ();

} estructura_t;

int _printf(const char *format, ...);
int _putchar(char c);
int  print_char(va_list argumentos);
int  print_string(va_list argumentos);
int  print_decimal(va_list argumentos);
int  print_integer(va_list argumentos);
#endif
