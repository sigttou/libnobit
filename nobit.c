#include <xor.h>
#include <and.h>
#include <or.h>
#include <not.h>
#include "nobit.h"

unsigned char xor_uc(unsigned char a, unsigned char b)
{
  return xor_lookup[a][b];
}

unsigned char and_uc(unsigned char a, unsigned char b)
{
  return and_lookup[a][b];
}

unsigned char or_uc(unsigned char a, unsigned char b)
{
  return or_lookup[a][b];
}

unsigned char not_uc(unsigned char a)
{
  return not_lookup[a];
}

char xor_c(char a, char b)
{
  return (char)xor_uc((unsigned char)a, (unsigned char) b);
}

char and_c(char a, char b)
{
  return (char)and_uc((unsigned char)a, (unsigned char) b);
}

char or_c(char a, char b)
{
  return (char)or_uc((unsigned char)a, (unsigned char) b);
}

char not_c(char a)
{
  return (char)not_uc((unsigned char)a);
}

unsigned int xor_ui(unsigned int a, unsigned int b)
{
  unsigned char* tmpa = (unsigned char*)&a;
  unsigned char* tmpb = (unsigned char*)&b;
  unsigned int ret;
  unsigned char* tmpr = (unsigned char*)&ret;

  for(unsigned int i = 0; i < sizeof(int); i++)
    tmpr[i] = xor_uc(tmpa[i], tmpb[i]);

  return ret;
}

unsigned int and_ui(unsigned int a, unsigned int b)
{
  unsigned char* tmpa = (unsigned char*)&a;
  unsigned char* tmpb = (unsigned char*)&b;
  unsigned int ret;
  unsigned char* tmpr = (unsigned char*)&ret;

  for(unsigned int i = 0; i < sizeof(int); i++)
    tmpr[i] = and_uc(tmpa[i], tmpb[i]);

  return ret;
}

unsigned int or_ui(unsigned int a, unsigned int b)
{
  unsigned char* tmpa = (unsigned char*)&a;
  unsigned char* tmpb = (unsigned char*)&b;
  unsigned int ret;
  unsigned char* tmpr = (unsigned char*)&ret;

  for(unsigned int i = 0; i < sizeof(int); i++)
    tmpr[i] = or_uc(tmpa[i], tmpb[i]);

  return ret;
}

unsigned int not_ui(unsigned int a)
{
  unsigned char* tmpa = (unsigned char*)&a;
  unsigned int ret;
  unsigned char* tmpr = (unsigned char*)&ret;

  for(unsigned int i = 0; i < sizeof(int); i++)
    tmpr[i] = not_uc(tmpa[i]);

  return ret;
}

int xor_i(int a, int b)
{
  unsigned char* tmpa = (unsigned char*)&a;
  unsigned char* tmpb = (unsigned char*)&b;
  int ret;
  unsigned char* tmpr = (unsigned char*)&ret;

  for(unsigned int i = 0; i < sizeof(int); i++)
    tmpr[i] = xor_uc(tmpa[i], tmpb[i]);

  return ret;
}

int and_i(int a, int b)
{
  unsigned char* tmpa = (unsigned char*)&a;
  unsigned char* tmpb = (unsigned char*)&b;
  int ret;
  unsigned char* tmpr = (unsigned char*)&ret;

  for(unsigned int i = 0; i < sizeof(int); i++)
    tmpr[i] = and_uc(tmpa[i], tmpb[i]);

  return ret;
}

int or_i(int a, int b)
{
  unsigned char* tmpa = (unsigned char*)&a;
  unsigned char* tmpb = (unsigned char*)&b;
  int ret;
  unsigned char* tmpr = (unsigned char*)&ret;

  for(unsigned int i = 0; i < sizeof(int); i++)
    tmpr[i] = or_uc(tmpa[i], tmpb[i]);

  return ret;
}

int not_i(int a)
{
  unsigned char* tmpa = (unsigned char*)&a;
  int ret;
  unsigned char* tmpr = (unsigned char*)&ret;

  for(unsigned int i = 0; i < sizeof(int); i++)
    tmpr[i] = not_uc(tmpa[i]);

  return ret;
}
