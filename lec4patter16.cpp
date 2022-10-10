#include<iostream>
using namespace std;
int main(){
  /*
      a 
      b b 
      c c c 
      d d d d
  */
  
 cout<<"enter the number"<<endl;
  int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int j=1;
    while(j<=i){
      cout<<(char)(96+i)<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}