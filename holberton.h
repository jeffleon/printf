#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>

typedef struct stp
{
	charp *p;
	int (*f)(va_list, char*, int);
};


int _printf(const char *format, ...);

#endif
