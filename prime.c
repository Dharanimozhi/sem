#include<stdio.h>
int check_prime(int x)
{
  int i;
  for(i=2;x%i!=0;i++);
  if(x==i)
  {
    printf("next prime no is %d",x);
    return 1;
  }
  else
  {
    return 0;
  }
}
int main()
{
  int n,i,j;
  printf("enter a no:");
  scanf("%d",&n);
  for(i=n+1;;i++)
  {
    if(check_prime(i))
    {
      break;
    }
  }
  getch();
  return 0;
}
