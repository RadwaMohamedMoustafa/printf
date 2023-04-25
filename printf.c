#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: string to print to stdout
 * Return: the number of characters printed excluding the
 * null byte used to end output to strings
 */
int _printf(const char *format, ...)
{	int i, k, counter = 0; 
	va_list(m);
	va_start(m, format);
	if (format == NULL)
	return (-1);
	for (i = 0; format[i]; i++)
	{
	if (format[i] == '%')
	{
	i++;
	if (format[i] == 'c')
	{
	char c = va_arg(m, int);
	_putchar(c);
	counter++;
	}
	else if (format[i] == 's')
	{
	char *s = va_arg(m, char*);
	for (k = 0; s[k]; k++)
	{ 
	_putchar(s[k]);
	}
	counter = counter + k;
	}
	else if (format[i] == '%')
	{
	_putchar('%');
	counter++;
	}
	else
	{
	_putchar('%');
	_putchar(format[i]);
	counter += 2;
	}}
	else
	{
	_putchar(format[i]), counter++;
	}}
	va_end(m);
	return (counter);
}
