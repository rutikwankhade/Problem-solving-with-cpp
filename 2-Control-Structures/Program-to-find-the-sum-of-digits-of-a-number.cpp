// Program to find the sum of digits of a number

#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
int n, sum=0,digit;
cin>>n;
while(n!=0){
  digit=n%10;
  sum=sum+digit;
  n=n/10;
}
cout<<"sum of digits is"<<sum;

}
