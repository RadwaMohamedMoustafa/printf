#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: string to print to stdout
 * Return: the number of characters printed excluding the
 * null byte used to end output to strings
 */
int _printf(const char *format, ...)
{	int i, k, c = 0;
	va_list args;
	if (!format)
	return (-1);
	va_start(args, format);
	for (i = 0; format[i]; i++)
	if (format[i] == '%' && ++i)
	if (format[i] == 'c')
	c += _putchar(va_arg(args, int));
	else if (format[i] == 's')
	for (k = 0; va_arg(args, char *)[k]; k++)
	c += _putchar(va_arg(args, char *)[k]);
	else if (format[i] == '%')
	c += _putchar('%');
	else
	c += _putchar('%') + _putchar(format[i]), c++;
	else
	c += _putchar(format[i]);
	va_end(args);
	return (c);
}
