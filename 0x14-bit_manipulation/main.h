#ifndef MAIN_H
#define MAIN_H

unsigned int binary_to_unit(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(usigned long int n, unsigned long int m);
int_atoi(const char *s);
int_putchar(char c);
int get_endianness(void);

#endif
