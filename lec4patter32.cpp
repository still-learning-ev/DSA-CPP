#include<iostream>
using namespace std;
int main(){
  /*
        1 2 3 1 2 3 
        1 2 * * 2 3 
        1 * * * * 3 
        * * * * * *
  */
  
 cout<<"enter the number"<<endl;
  int n;
  cin>>n;
  int i=1,count=1;
  while(i<=n){
    int j=1;
    while(j<=n-i){
      cout<<j<<" ";
      j++;
    }
    j=1;
    while(j<i){
      cout<<"* ";
      j++;
    }
    j=1;
    while(j<i){
      cout<<"* ";
      j++;
    }
    while(j<n){
      cout<<j<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}