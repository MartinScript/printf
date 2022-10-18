#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * _printf - a function that formats printing.
 * @format: formatted string.
 * Return - return length of string.
 */
int _printf(const char *format, ...)
{
	const char *new_str;
	int i;
	char *s;
	int len = 0;
	unsigned int uint_val;
	const void *ptr;

	va_list argList;
	va_start(argList, format);

	for (new_str = format; *new_str; new_str++)
	{
		if (*new_str != '%')
		{
			_putchar(*new_str);
			++len;
			continue;
		}

		switch (*++new_str)
		{
		case 'c':
			i = va_arg(argList, int);
			_putchar(i);
			++len;
			break;

		case 'd':
		case 'i':
			i = va_arg(argList, int);
			if (i < 0)
			{
				i = -i;
				_putchar('-');
			}
			_puts(int2str(i));
			++len;
			break;

		case '%':
			_putchar('%');
			++len;
			break;

		case 's':
			s = va_arg(argList, char *);
			_puts(s);
			++len;
			break;

		case 'b':
			i = va_arg(argList, int);
			s = fromDeci(i, 2);
			_puts(s);
			++len;
			break;

		case 'x':
			i = va_arg(argList, int);
			s = fromDeci(i, 16);
			_puts(s);
			++len;
			break;

		case 'X':
			i = va_arg(argList, int);
			s = fromDeci(i, 16);
			string_toupper(s);
			_puts(s);
			++len;
			break;

		case 'o':
			i = va_arg(argList, int);
			s = fromDeci(i, 8);
			_puts(s);
			++len;
			break;

		case 'u':
			uint_val = va_arg(argList, unsigned int);
			print_unsgined_number(uint_val);
			++len;
			break;

		case 'p':
			ptr = va_arg(argList, void *);
			print_memory(ptr);
			++len;
			break;

		default:
			_putchar(*new_str);
			++len;
			break;
		}
	}
	va_end(argList);

	return (len);
}
