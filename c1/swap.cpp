#include<stdio.h>
void inplace_swap(int *x,int *y)
{
  *x = *x^*y;
  *y = *x^*y;
  *x = *x^*y;
}



int main()
{
  int a1 =1;
  int a2 =2;
  inplace_swap(&a1,&a2);
  printf("%d,%d\n",a1,a2);
  return 0;
}
