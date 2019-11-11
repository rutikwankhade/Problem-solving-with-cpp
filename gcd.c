//c program to find gcd and lcm of two given numbers
#include<stdio.h>
int main()
{
  int n1,n2,i,gcd,lcm;
  printf("enter two numbers ");
  scanf("%d %d",&n1,&n2);
  for(i=1;i<=n1 && i<=n2;i++)
  {
    if(n1%i==0 && n2%i==0)
    {
      gcd=i;
    }

  }
  printf("gcd of %d and %d is %d",n1,n2,gcd);
  lcm=(n1*n2)/gcd;
  printf("lcm of %d and %d is %d",n1,n2,lcm);

}
