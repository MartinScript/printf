#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
/**
 * _printf - a function that formats printing.
 * @format: formatted string.
 * Return: return length of string.
 */
int _printf(const char *format, ...)
{
	const char *new_str;
	int i;
	char *s;
	int len = 0;
	unsigned int uint_val;
	/* const void *ptr;*/

	va_list argList;
	va_start(argList, format);

	if (format == NULL)
		return (-1);

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
				len = len + print_int(i) + 1;
				break;
			}
			len = len + print_int(i);
			break;

		case '%':
			_putchar('%');
			++len;
			break;

		case 's':
			s = va_arg(argList, char *);
			if (s == NULL)
			{
				_puts("(null)");
				break;
			}
			_puts(s);
			len = len + _strlen(s);
			break;

		case 'b':
			i = va_arg(argList, int);
			if (i == 0)
			{
				len = len + print_int(i);
				break;
			}
			s = fromDeci(i, 2);
			len = len + _puts(s);
			break;

		case 'x':
			i = va_arg(argList, int);
			if (i == 0)
			{
				len = len + print_int(i);
				break;
			}
			s = fromDeci(i, 16);
			len = len + _puts(s);
			break;

		case 'X':
			i = va_arg(argList, int);
			if (i == 0)
			{
				len = len + print_int(i);
				break;
			}
			s = fromDeci(i, 16);
			string_to_upper(s);
			len = len + _puts(s);
			break;

		case 'o':
			i = va_arg(argList, int);
			if (i == 0)
			{
				len = len + print_int(i);
				break;
			}
			s = fromDeci(i, 8);
			len = len + _puts(s);
			break;

		case 'u':
			uint_val = va_arg(argList, unsigned int);
			len = len + print_unsigned_number(uint_val);
			break;

		case '\0':
			return (len);

		case 'S':
			s = va_arg(argList, char *);
			len = len + printable_character(s);
			break;

			/*case 'p':
				ptr = va_arg(argList, void *);
				print_memory(ptr);
				++len;
				break;*/

		default:
			_putchar(*new_str);
			++len;
			break;
		}
	}

	va_end(argList);

	return (len);
}
