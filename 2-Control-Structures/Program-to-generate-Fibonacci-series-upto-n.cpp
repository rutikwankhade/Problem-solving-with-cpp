// Program to generate Fibonacci series upto n
/* Fibonacci series is a series in which each number is
the sum of the last two preceding numbers.
The first two terms of a Fibonacci series are 0 and 1.*/

#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
int n,a=0,b=1,sum=0;
cin>>n;

cout<<a<<" "<<b<<" ";
while(sum<=n){
sum=a+b;
a=b;
b=sum;
cout<<sum<<" ";

}

}
