#include<stdio.h>

int concat(int x,int y)
{
   y = y&0xFFFFFF00;
   x = x&0x000000FF;
   
   return x+y;
}

int main()
{
  
   int x = 0x89ABCDEF;
   int y = 0x76543210;
   
  printf("%x\n",concat(x,y));
}
