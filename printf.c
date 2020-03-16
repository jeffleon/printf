#include "holberton.h"

/**
 * _printf - prints all the types of character
 * @format: pointer to string to print
 * Return: numbers of printed bytes
 */

int _printf(const char *format, ...)
{
	int i= 0 , j = 0, k = 0, bfc = 0;
	char *buffer = malloc(50);

	va_list args;

	va_start(args, format);

	s options[] =
		{
			{'s', print_strings},
			{'c', print_char},
			{'i', print_integers},
			{'d', print_integers},
			{'%', print_opc}
		};

	if (format == NULL)
		return (0);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; j < 5; j++)
			{
				if (format [i + 1] == options[j].p)
				{
					k = options[j].f(args, buffer, bfc);
					bfc += k;
					k = 0;
					i++;
				}
			}
		}
		else
		{
			buffer[bfc] = format[i];
			bfc++;
		}
	}
	buffer[bfc] = '\0';
	write(1, buffer, bfc);
	free(buffer);
	return (bfc);
}
