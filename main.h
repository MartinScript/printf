#ifndef MAIN_H_
#define MAIN_H_

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int toDeci(char *str, int base);
int val(char c);
char *int2str(unsigned int n);
int _pow(int base, int power);
int get_number_of_digits(int n);
void _puts(char *s);
int _putchar(char c);
int _strlen(char *s);
void strev(char *str);
char *fromDeci(int inputNum, int base);
char reVal(int num);
char *string_toupper(char *str);
int print_unsgined_number(unsigned int n);
void print_memory(const void *ptr);
char *_memcpy(char *dest, char *src, unsigned int n);

#endif
