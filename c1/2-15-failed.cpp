#include<stdio.h>
bool equal(int x ,int y)
{   
    if(x&&y)
    {
      if(x&y)
      {
        printf("x&y is not zero\n");
        if(x&(~(x&y)))
        {
          printf("x&~(x&y) is not zero\n");
          return false;
        } 
        else
        {
          printf("x&~(x&y) is zero\n");
          return true;
        }
      }
      else 
      {
        printf("x&y is zero not equal\n");
        return false;
      }
    }
    else
    return true;
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
