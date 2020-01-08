#include<stdio.h>


/*Determine whether arguments can be added without  overflow */

int add_ok(short x, short y)
{
  if(x>=0 && y>=0&&x+y<0)
  return 1;
  else if(x<0 && y<0 && x+y>0)
  return 1;
  else return 0;
  
}


int main()
{
  short x=32767;
  short y=32767;
  printf("%d\n",x);
  printf("%d\n",x+y);
  printf("%d\n",add_ok(x,y));
  return 0;
}
