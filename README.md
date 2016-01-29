#include<stdio.h>
int main()
{
  int n,bit=0;
  scanf("%d",&n);
  while(n>0)
  {
    n=n/2;
    bit++;
  }
  printf("the no of bits is:%d",bit);
  return 0;
}
