#include <stdio.h>
#include <limits.h>

int main(void)
{
  unsigned char c, x, r;
  FILE* f = fopen("or.bin", "w");
  for(c = 0; c < UCHAR_MAX; c++)
  {
    for(x = 0; x < UCHAR_MAX; x++)
    {
      r = c | x;
      fwrite(&r, 1, 1, f);
    }
    r = c | x;
    fwrite(&r, 1, 1, f);
  }
  for(x = 0; x < UCHAR_MAX; x++)
  {
    r = c | x;
    fwrite(&r, 1, 1, f);
  }
  r = c | x;
  fwrite(&r, 1, 1, f);
  return 0;
}
