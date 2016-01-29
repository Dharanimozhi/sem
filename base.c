#include<stdio.h>
void main()
{
  int b,n,i,r,digit,p,count=0;
  char a[100];
  printf("enter num");
  scanf("%d",&n);
  printf("enter base");
  scanf("%d",&b);
  p=n;
  do
  {
    r=p%b;
    digit='0'+r;
    if(digit>'9')
      digit=digit+7;
    a[count]=digit;
    count++;
    p=p/b;
  }while(p!=0);
  printf("base %d equivalent of num %d is",b,n);
  for(i=count-1;i>=0;--i)
  {
    printf("%c",a[i]);
  }
}
  
