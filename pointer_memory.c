#include "main.h"

/* unsigned char *_memcpy(unsigned char *dest, const  *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];

	return (dest);
}
 */

int printable_character(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] < ' ' || s[j] > '~')
		{
			_puts("\\x");
			_printf("0%X", s[j]);
		}
		else
		{
			_putchar(s[j]);
		}
	}
}