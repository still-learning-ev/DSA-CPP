#include<iostream>
using namespace std;
int main(){
  /*
    5 
    5 4 
    5 4 3 
    5 4 3 2 
    5 4 3 2 1
  */
  
 cout<<"enter the number"<<endl;
  int n;
  cin>>n;
  int i=1, count=1;
  while(i<=n){
    int j=1;
    while(j<=i){
      cout<<n-j+1<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}