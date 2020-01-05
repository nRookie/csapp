#include<stdio.h>


int main()
{
  int x1 = 0xFEDCBA98 <<0;
  int x2 = (signed)(0xFEDCBA98>>4);
  unsigned x3 = 0xFEDCBA98 >>8;
  printf(" x1:%.8x\n",x1);
  printf(" x2:%.8x\n",x2);
  printf("unsigned int x1:%.8x\n",x3);
  return 0;
}
