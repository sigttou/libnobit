#include <stdio.h>
#include <limits.h>

int main(void)
{
  unsigned char c, r;
  FILE* f = fopen("not.bin", "w");
  for(c = 0; c < UCHAR_MAX; c++)
  {
    r = !c;
    fwrite(&r, 1, 1, f);
  }
  r = !c;
  fwrite(&r, 1, 1, f);
  return 0;
}
