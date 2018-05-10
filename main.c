#include<stdio.h>
#include"header.h"
int main()
{
  int a,b,s,m,p,d;
  printf("enter the values a,b:\n");
  scanf("%d %d",&a,&b);
  s=add(a,b);
  m=sub(a,b);
  p=mul(a,b);
  d=div(a,b);
  printf("%d %d %d %d\n",s,m,p,d);
}
  
