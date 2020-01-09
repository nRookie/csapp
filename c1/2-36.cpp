#include<stdio.h>
#include<stdint.h>

int tmult_ok(int x,int y)
{
  int64_t pll =(int64_t) x*y;
  
  return pll ==(int)pll;
}

int main()
{
  int x = 0x80000000;
  int y = 0x7FFFFFFF;
  printf("%u %ld %d\n",x,x,tmult_ok(x,y));
  return 0;
}

