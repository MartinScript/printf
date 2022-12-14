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
int get_number_of_digits(unsigned int n);
int print_int(int n);
int printable_character(char *s);
int _puts(char *s);
int _putchar(char c);
int _strlen(char *s);
void strev(char *str);
char *fromDeci(unsigned int inputNum, int base);
char reVal(int num);
char *string_to_upper(char *str);
int print_unsigned_number(unsigned int n);
void print_memory(const void *ptr);
unsigned char *_memcpy(unsigned char *dest, char *src, unsigned int n);

#endif
