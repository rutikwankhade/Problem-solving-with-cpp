// c program to swap two variables using a temporary variables
#include<stdio.h>
int main()
{
  int var1,var2,temp;
  printf("enter first value var1 ");
  scanf("%d",&var1);
  printf("enter second value var2 ");
  scanf("%d",&var2);
  temp=var1;
  var1=var2;
  var2=temp;
  printf("now the value of var1 is %d and value of var2 is %d ",var1,var2);
  return 0;
}
