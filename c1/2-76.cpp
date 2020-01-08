#include<stdio.h>


/*Determine whether arguments can be added without  overflow */

int add_ok(int x, int y)
{
  if(x>=0 && y>=0&&x+y<0)
    return 0;
  else if(x<0 && y<0 && x+y>=0)
  return 0;
  else return 1;
  
}



int main()
{
  int x=0x80000001;
  int y=0x80000000;
  printf("%d\n",x-y);
  if(y==0x80000000)
  printf("%d\n",add_ok(-x,-y));
  else
  printf("%d\n",add_ok(x,-y));
  return 0;
}
