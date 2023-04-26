#include "main.h"
/**
 * print_str - print str
 * @s: string pointer
 * Return: length of string printed
*/
int print_str(char *s)
{
	int k;
	char *ptr = s;

	if (ptr == NULL)
	ptr = "(null)";
	for (k = 0; ptr[k]; k++)
	_putchar(ptr[k]);
	return (k);
}
/**
 * _printf - produces output according to a format
 * @format: string to print to stdout
 * Return: the number of characters printed excluding the
 * null byte used to end output to strings
 */
int _printf(const char *format, ...)
{	int i, counter = 0;
	va_list m;

	va_start(m, format);
	if (format == NULL)
	return (-1);
	for (i = 0; format[i]; i++)
	{
	if (format[i] == '%')
	{
		i++;
	if (!format[i])
		break;
	if (format[i] == 'c')
	{
	counter += _putchar(va_arg(m, int));
	}
	else if (format[i] == 's')
	counter += print_str(va_arg(m, char*));
	else if (format[i] == '%')
	counter += _putchar('%');
	/*else if (format[i] == 'd' || format[i] == 'i')
	print_number(va_arg(m, int), &counter);*/
	else
	{
	counter += _putchar('%');
	counter += _putchar(format[i]);
	}
	}
	else
	counter += _putchar(format[i]);
	}
	va_end(m);
	return (counter == 0 ? -1 : counter);
}
