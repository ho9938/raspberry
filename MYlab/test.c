#include <stdio.h>

int main()
{
  int abs = 127;
  unsigned exp = 0;
  int i = 0;
  while (i < 8)
  {
        exp = exp + ((abs % 2) << i);
		printf("exp: %x\n", exp);
        abs = abs / 2;
		printf("abs: %d\n", abs);
        i = i + 1;
  }
  printf("%x\n", exp);
}
