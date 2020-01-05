#include<stdio.h>



/*declarations of functions implementation operations bis and bic */




int bis(int x,int m)
{
  return x|m;
}
int bic(int x,int m)
{
  return x&~m;
}



/* Compute x|y using only calls to functions bis and bic */
int bool_or(int x, int y){
  
  int result = bis(x,y);
  return result;
}


/*compute x^y using only calls to functions bis and bic */
int bool_xor(int x, int y)
{
  int result = bis(bic(y,x),bic(x,y));
  return result;
}



int main()
{
  int x= 12;
  int y= 7;
  printf("%d\n",bool_xor(x,y));
  printf("%d\n",bool_or(x,y));
  return 0;
}
