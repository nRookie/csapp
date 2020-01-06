#include<stdio.h>


float sum_elements(float a[] , int length)
{
  int i ;
  float result = 0;

  for (i = 0; i <= length-1; i++)
    result += a[i];
  return result;
}

float sum_elements_error(float a[] , unsigned char length)
{
  int i ;
  float result = 0;
  // comapre signed with unsigned , (unsigned)-1 equals to max signed num,
  // thus the array would print until the i = max signed num
  // array bound exception
  printf("%u\n",-1);
  printf("%u\n",length-1);
  printf("%u\n",(unsigned char)(length-1));
  for (i = 0; i <= (unsigned char)(length-1); i++)
   { 
        printf("%d:%d ",i,a[i]); 
       result += a[i];
   }
  return result;
}

int main()
{
  float a[4] = {1,3,4,5};
  unsigned char uc = -1;
  //printf("%u %d\n",uc);
  float result = sum_elements_error(a,4);
  printf("%d\n",result);
  return 0;
}
