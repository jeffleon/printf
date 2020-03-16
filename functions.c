#include "holberton.h"

/**
 * print_strings - print strings
 * @list: list of arguments
 * @p: pointer to buffer
 * @g: counter to return
 * Return: integer or counter
 */

int print_strings (va_list list, char* p, int g)
{
	int i = 0;
	char *j = va_arg(list, char*);

	for (i = 0; j[i]; i++)
	{
		p[g + i] = j[i];
	}
	return(i);
}

/**
 * print_char - print chars
 * @list: list of arguments
 * @p: pointer to buffer
 * @g: counter to return
 * Return: integer or counter
 */

int print_char (va_list list, char* p, int g)
{
	char j = va_arg(list, int);
	p[g] = j;
	return (1);
}


/**
 * print_opc - print chars
 * @list: list of arguments
 * @p: pointer to buffer
 * @g: counter to return
 * Return: integer or counter
 */

int print_opc (va_list list, char* p, int g)
{
	p[g] = 37;
	return (1);
}

/**
 * print_integers - print integers
 * @list: list of arguments
 * @p: pointer to buffer
 * @g: counter to return
 * Return: integer or counter
 */

int print_integers (va_list list, char* p, int g)
{
	int j = va_arg(list, int), i = 0;
	int aux = j, retorno = 0;

	if (j < 0)
	{
		aux = j *= -1;
		p[g] = '-';
		i++;
	}

	while(aux/10 > 0)
	{
		aux = aux / 10;
		i++;
	}
	retorno = i;
	while(j/10 > 0)
	{
		p[g + i] = j % 10 + '0';
		j = j / 10;
		i--;
	}
	p[g + i] = j%10 + '0';
	retorno++;
	return(retorno);
}
