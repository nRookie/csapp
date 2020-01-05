#include<stdio.h>



int main()

{

  if(-2147483647-1U < -2147483647)
  
  printf("%d %u\n",-1U) ;
  printf("%d %u\n",-2147483647-1U) ;
  printf("%d %u\n",-2147483647 );
}
