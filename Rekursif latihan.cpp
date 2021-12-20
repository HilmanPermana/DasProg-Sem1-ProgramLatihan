#include <stdio.h>

/*******************************************
   Fungsi Rekursif untuk f(n) = f(n-1) + 1
********************************************/
unsigned int deret1(int n)
{
  if (n == 1)
    return 1;
  else
    return (deret1(n-1) + 1);
}

int main()
{
  int x;

  for (x=1; x<=10; x++)
    printf("%4d", deret1(x));

  return 0;
}
