#include<stdio.h>


int main()
{
  int x= 0x87654321;

  printf("%.8x\n",x&0xff);
  printf("%.8x\n",x^~0xff);
  printf("%.8x\n",x|0xff);
return 0;
}

