#include<iostream>
using namespace std;
int main(){

int n,count=0,i,j;

cout<<"number";
cin>>n;
int a[n]={2};

for(i=2;i<=n;i++){
  if(i%2!=0){
    for(j=1;j<=n;j++)
    {
      a[j]=i;
      cout<<a[j];
    }
  }


}
//
// for(j=0;j<=n;j++)
// {
//   cout<<a[j];
// }

//
// for(i=2;i<=n;i++)
// {
//   if ((i%2==0) || (i%3==0) || (i%5==0) || (i%7==0))
//   {
//     // count++;
//     cout<<i;
//   }
// }
// cout<<count;
}
