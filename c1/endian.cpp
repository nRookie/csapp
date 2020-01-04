#include<stdio.h>
#include<cstring>


typedef unsigned char *byte_pointer;


void show_bytes(byte_pointer start,size_t len)
{
  size_t i;
  for (i =0 ; i < len ; i++)
    printf(" %.2x", start[i]);
  printf("\n");
}


void show_int(int x)
{
  show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x)
{
  show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x) {
  show_bytes((byte_pointer) &x, sizeof(void *));
}


int main()
{
 int val = 12345;
 float fval = (float) val;
 int *pval = &val;
 show_int(val);
 show_float(fval);
 show_pointer(pval);
 const char * s="abcdef";
 show_bytes((byte_pointer)s,strlen(s));
 show_bytes((byte_pointer)s,sizeof(s));
 return 0;
}
