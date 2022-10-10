#include<iostream>
using namespace std;
int main(){
/*
1 2 3 4 
1 2 3 4 
1 2 3 4 
1 2 3 4
*/
  cout<<"enter the number"<<endl;
  int n=0;
  cin>>n;
  int i=1;
  while(i<=n){
    int j=1;
    while(j<=n){
      cout<<j<<" ";
      j++;
    }
    i++;
    cout<<endl;
  }
  return 0;
}