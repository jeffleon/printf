#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>

typedef struct stp
{
        char p;
        int (*f)(va_list, char*, int);
}s;

int print_strings (va_list list, char* p, int g);
int print_char (va_list list, char* p, int g);
int print_integers (va_list list, char* p, int g);
int _printf(const char *format, ...);

#endif
