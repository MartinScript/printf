#include "main.h"

int _pow(int base, int power)
{
	int res = 1;
	int i;

	if (power == 0)
	{
		return (res);
	}
	for (i = 0; i < power; i++)
		res = res * base;
	return (res);
}

int get_number_of_digits(int n)
{
	int i, count;
	for (i = 10, count = 0;; i *= 10, count++)
	{
		if ((int)n / i == 0)
		{
			break;
		}
	}
	return count + 1;
}
