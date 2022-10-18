#include <unistd.h>
#include "main.h"

void _puts(char *s)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		_putchar(s[i]);
	}
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_memory(const void *ptr)
{
	unsigned char buf[sizeof(ptr)];

	_memcpy(buf, &ptr, sizeof(ptr));

	for (int i = sizeof(ptr) - 1; i >= 0; i--)
	{
		unsigned char hi = (buf[i] >> 4) & 0xf;
		unsigned char lo = buf[i] & 0xf;
		char tmp[2] = {hi, lo};

		tmp[0] += hi < 10 ? '0' : 'A' - 10;
		tmp[1] += lo < 10 ? '0' : 'A' - 10;

		write(1, tmp, 2);
	}
}
