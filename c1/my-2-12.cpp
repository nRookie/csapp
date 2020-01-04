#include<stdio.h>


typedef unsigned char * byte_pointer;

void print_lowest(byte_pointer x,int len)
{
 for(int i = 1 ; i<len;i++)
 {
     x[i] = x[i]^x[i];
 }

 for(int i = 0 ; i<len;i++)
 {
    printf("%x ", x[i]);
 }

}

void reverse_besides_lowest(byte_pointer x,int len)
{

 for(int i = 1 ; i<len;i++)
 {
     x[i] = ~x[i];
 }


 for(int i = 0 ; i<len;i++)
 {
    printf("%x ", x[i]);
 }

}

void lowest_one(byte_pointer x,int len)
{
      x[0]=0xFF;

 for(int i = 0 ; i<len;i++)
 {
    printf("%x ", x[i]);
 }

}


int main()
{
  int x=0x87654321;

  print_lowest((byte_pointer)(&x),sizeof(x));
  printf("\n");  

  x=0x87654321;
  reverse_besides_lowest((byte_pointer)(&x),sizeof(x));
  printf("\n");  
  
  x=0x87654321;
  lowest_one((byte_pointer)(&x),sizeof(x));
  printf("\n");  

  return 0;
}
