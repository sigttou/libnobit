#ifndef _NOBIT_H_
#define _NOBIT_H_

unsigned char xor_uc(unsigned char a, unsigned char b);
unsigned char and_uc(unsigned char a, unsigned char b);
unsigned char or_uc(unsigned char a, unsigned char b);
unsigned char not_uc(unsigned char a);

char xor_c(char a, char b);
char and_c(char a, char b);
char or_c(char a, char b);
char not_c(char a);

unsigned int xor_ui(unsigned int a, unsigned int b);
unsigned int and_ui(unsigned int a, unsigned int b);
unsigned int or_ui(unsigned int a, unsigned int b);
unsigned int not_ui(unsigned int a);

int xor_i(int a, int b);
int and_i(int a, int b);
int or_i(int a, int b);
int not_i(int a);

#endif
