#include<stdio.h>
int input_number()
{
int a;
printf("enter a number\n");
scanf("%d",&a);
return a;
}

int is_composite(int n, int composite)
{
  
  composite=0;
  for(int i=1;i<=n;i++)
  {
    if(n%i==0)
    {
    composite +=1;
  }
}
return composite;
}
void output(int n, int a)
{
  if(a>2)
  {
  printf("the  number is composite\n",n);
  }
  else
  {
  printf("the number is not composite\n",n);
}
}
int main()
{
  int p,q,r;
  p=input_number();
  q=is_composite(p,q);
  output(p,q);
  return 0;
}
