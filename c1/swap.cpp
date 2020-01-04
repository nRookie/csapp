#include<stdio.h>
void inplace_swap(int *x,int *y)
{
  *x = *x^*y;
  *y = *x^*y;
  *x = *x^*y;
}

void reverse_array(int *a,int l)
{
  
  for(int first=0,last=l; first<last;first++,last--)
  { 
      inplace_swap(&a[first],&a[last]);
  }
}

int main()
{
  int a[] = {1,2,3,4,5};

  reverse_array(a,4);
  for(int i =0;i<5;i++)
    printf("%d ",a[i]);
  return 0;
}
