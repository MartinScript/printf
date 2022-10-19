#include <unistd.h>
#include "main.h"

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

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/* 
void print_memory(const void *ptr)
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
}
*/
