#include<stdio.h>
#include<cstring>
/*This is a buggy code */
int strlonger(char*s ,char*t)
{
  printf("%u\n",strlen(s));
  
  printf("%u\n",strlen(t));
  printf("%u\n",strlen(s) - strlen(t));
  return strlen(s) - strlen(t)>0;
}

int strlonger_correct(char*s,char*t)
{
  return strlen(s) > strlen(t);
}
int main()
{
   char s1[] = "jj";
   char s2[] = "hello";
   printf("%u\n",strlonger(s1,s2));  
   printf("%u\n",strlonger_correct(s1,s2));
}
