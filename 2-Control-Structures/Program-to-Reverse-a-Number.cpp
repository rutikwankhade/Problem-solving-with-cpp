// Program to Reverse a Number
#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  while(n!=0){
        cout<<n%10;
        n=n/10;
      }
}
