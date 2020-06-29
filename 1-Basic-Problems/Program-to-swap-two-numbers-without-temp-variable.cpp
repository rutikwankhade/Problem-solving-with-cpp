// Program to Swap two Numbers Without Using Temporary Variable.
#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
  int a,b;
  cin>>a>>b;
  cout<<"before swapping a= "<<a<<" b= "<<b;
  a=a+b;
  b=a-b;
  a=a-b;
  cout<<"\nAfter swapping a= "<<a<<" and b= "<<b;
}
