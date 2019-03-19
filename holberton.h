#ifndef HOLBERTON_H_
#define HOLBERTON_H_
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>


typedef struct estructura {
	char * cadena;
	void (*pointF) ();

} estructura_t;

int _printf(const char *format, ...);
int _putchar(char c);
#endif
