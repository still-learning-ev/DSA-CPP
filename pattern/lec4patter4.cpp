#include<iostream>
using namespace std;
int main(){
  /*

    4 3 2 1 
    4 3 2 1 
    4 3 2 1 
    4 3 2 1

  */
  cout<<"enter the number"<<endl;
  int n;
  cin>>n;
  // print n-j+1
  int i=1;
  // while(i<=n){
  //   int j=1;
  //   while(j<=n){
  //     cout<<n-j+1<<" ";
  //     j++;
  //   }
  //   i++;
  //   cout<<endl;
  // }

  while(i<=n){
    int j=n;
    while(j>=1){
      cout<<j<<" ";
      j--;
    }
    cout<<endl;
    i++;
  }
  
  
  return 0;
}
