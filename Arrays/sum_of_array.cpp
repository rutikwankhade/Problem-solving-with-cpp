#include<iostream>
using namespace std;
int main(){
  int a[100], n,sum=0;
  cout<<"enter number of elements";
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<n;i++){
    sum+=a[i];
  }
  cout<<"the sum is "<<sum;
}
