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

	j = rev_string(j);
	for (i = 0; j[i]; i++)
		p[g + i] = j[i];
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
	char *j = va_arg(list, char*);

	j = rot13(j);
	for (i = 0; j[i]; i++)
		p[g + i] = j[i];
	return (i);
}
