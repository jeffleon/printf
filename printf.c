#include "holberton.h"

/**
 * _printf - prints all the types of character
 * @format: pointer to string to print
 * Return: numbers of printed bytes
 */

int _printf(const char *format, ...)
{
	int i = 0, j = 0, k = 0, bfc = 0;
	char *buffer = malloc(2048);
	va_list args;
	s options[] = {
		{'%', print_opc}, {'s', print_strings}, {'c', print_char},
		{'i', print_integers}, {'d', print_integers},
		{'u', print_unintegers}, {'b', print_bin}, {'x', print_hexa},
		{'X', print_hexaM}, {'o', print_octal}
	};

	va_start(args, format);
	if (format == NULL)
		return (0);

	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; j < 10; j++)
			{
				if (format[i + 1] == options[j].p)
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
	va_end(args);
	free(buffer);
	return (bfc);
}
