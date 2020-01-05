#include<stdio.h>
bool equal(int x ,int y)
{
  if(!(x^y))
  return true;
  else return false;   
}


int main()
{
   int x,y;
   while(true)
   {
     scanf("%d %d",&x,&y);
     printf("%d\n",equal(x,y));
   }
    return 0;
  
}
