#include<stdio.h>

int div16(int x)
{
 return (x>0?x+(1<<4)-1:x)>>4;
// return x;
}

int main()
{
  printf("%d",div16(-32));
  return 0;
}
