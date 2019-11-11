//c program to chech the given  number is even or odd
#include<stdio.h>
int main()
  {
    int num;
    printf("enter the number ");
    scanf("%d",&num);

    //using if-else statements
    if(num%2==0)      //use relational operator ==
    printf("the number is even");
    else
    printf("the number is odd");

    //using ternary operator
    (num%2==0)? printf("number is even") : printf("number is odd");
  }
