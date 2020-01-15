#include<stdio.h>



unsigned replace_byte(unsigned x,int i, unsigned char b)
{
  int shift=0xFF;
  shift = shift<<(i*8);
 // printf("%x\n",shift);
 // printf("%x\n",b);
  int bb = b<<(i*8);
 // printf("%x\n",bb);
  return (x-(x&shift)+bb);
  
}
int main()
{
  printf("%X\n",replace_byte(0x12345678,2,0xAB));
  printf("%X\n",replace_byte(0x12345678,0,0xAB));
  return 0;
}
