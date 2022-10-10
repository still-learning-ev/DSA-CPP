#include<iostream>
using namespace std;
int main(){
  cout<<"enter the number : "<< endl;
  int n;
  cin>>n;
  int sum=0;
  for(int i=0;i<=n;i++){
    sum+=i;
  }
  cout<<"the sum is : "<<sum<<endl;
  return 0;
}