#include<iostream>
using namespace std;
int main(){
  /*  1 1 1
      2 2 2
      3 3 3   */

  cout<<"enter number"<<endl;
  int n=0;
  cin>>n;
  int i=1;

  while(i<=n){
    int j=1;
    while(j<=n){
      cout<<i<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}