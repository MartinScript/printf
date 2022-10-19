#include <unistd.h>
#include "main.h"
/**
 * _puts - prints string to the output
 * @s: string
 * Return: int
 */

int _puts(char *s)
{
	int i;
	int len = 0;

	for (i = 0; *(s + i); i++)
	{
		_putchar(s[i]);
		len++;
	}
	return (len);
}

/**
 * _putchar - prints string to the output
 * @c: string
 * Return: int
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * @print_int - print integer to output
 * @n: integer
 * Return - int
 */

int print_int(int n)
{
	int len, a, bytecount, digit;

	bytecount = 0;
	if (n < 0)
		bytecount += _putchar('-');
	else
		n = -n;
	for (len = 1, a = n; a < -9; len *= 10)
		a /= 10;
	for (a = n; len != 0; len /= 10)
	{
		digit = (a / len) * -1;
		bytecount += _putchar(digit + '0');
		a %= len;
	}

	return (bytecount);
}
/* void print_memory(const void *ptr)
{	unsigned char buf[sizeof(ptr)];
	int i;

	_memcpy(buf, ptr, sizeof(ptr));

	for (i = sizeof(ptr) - 1; i >= 0; i--)
	{
		unsigned char hi;
		hi = (buf[i] >> 4) & 0xf;
		unsigned char lo;
		lo = buf[i] & 0xf;
		char tmp[2];
		tmp[0] = hi;
		tmp[1] = lo;

		tmp[0] += hi < 10 ? '0' : 'A' - 10;
		tmp[1] += lo < 10 ? '0' : 'A' - 10;

		write(1, tmp, 2);
	}
} */
