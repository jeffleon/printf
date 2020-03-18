#include "holberton.h"

/**
 * print_rev - print strings
 * @list: list of arguments
 * @p: pointer to buffer
 * @g: counter to return
 * Return: integer or counter
 */

int print_rev(va_list list, char *p, int g)
{
	int i = 0;
	char *j = va_arg(list, char*);
	char *f = malloc(sizeof(char) * 10);
	write(1, "voyaqui",8);
	f = rev_string(j);
	for (i = 0; f[i]; i++)
		p[g + i] = f[i];
	return (i);
}

/**
 * print_root13 - print strings
 * @list: list of arguments
 * @p: pointer to buffer
 * @g: counter to return
 * Return: integer or counter
 */

int print_root13(va_list list, char *p, int g)
{
	int i = 0;
	char *j = rot13(va_arg(list, char*));
	write(1,"voy aqui",9);
	for (i = 0; j[i]; i++)
		p[g + i] = j[i];
	return (i);
}
