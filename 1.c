#include <stdio.h>

int main(void)
{
  int n;

  printf("n = ");
  scanf("%d", &n);

  if ((n & 1) == 0) /*元の条件(n & 1 == 0)では1 == 0 が先に比較されてしまい、全てのパターンでfalse、つまり奇数となる。そのため、(n & 1)と括弧で括ることによってnと1が先に比較され、偶数の場合には0となることから修正された。*/
  {
    printf("%d は偶数です\n", n);
  }
  else
  {
    printf("%d は奇数です\n", n);
  }
  return 0;
}
